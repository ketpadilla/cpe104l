#include <iostream>
#include <array>
#include <chrono>

using namespace std;
using TimePoint = chrono::system_clock::time_point;
using Days = chrono::duration<int, ratio<60 * 60 * 24>>;

class ScheduleStructure {
private:
  int currentPeriodNumber;

public:
  ScheduleStructure(int currentPeriodNumber) : currentPeriodNumber(currentPeriodNumber) {}

  int getCurrentPeriodNumber() const {
    return currentPeriodNumber;
  }

  virtual int getDaysRemaining() = 0;
  virtual int getDaysUntilNextPeriod() = 0;
};

class SemestralSchedule : public ScheduleStructure {
private:
  array<array<TimePoint, 2>, 2> pairs;
  TimePoint currentDate;

public:
  SemestralSchedule(const TimePoint& currentDate, const TimePoint& sem1Start, const TimePoint& sem1End, const TimePoint& sem2Start, const TimePoint& sem2End, int currentPeriodNumber) 
  : ScheduleStructure(currentPeriodNumber), currentDate(currentDate) {
    pairs[0][0] = sem1Start;
    pairs[0][1] = sem1End;
    pairs[1][0] = sem2Start;
    pairs[1][1] = sem2End;
  }

  int getDaysRemaining() override {
    TimePoint end = pairs[getCurrentPeriodNumber() - 1][1];
    auto remaining = chrono::duration_cast<Days>(end - currentDate).count();
    return remaining > 0 ? remaining : 0;
  }

  int getDaysUntilNextPeriod() override {
    if (getCurrentPeriodNumber() == 2) {
      return getDaysRemaining() + 1;
    }

    TimePoint nextStart = pairs[getCurrentPeriodNumber()][0];
    auto untilNext = chrono::duration_cast<Days>(nextStart - currentDate).count();
    return untilNext > 0 ? untilNext + 1 : 0; 
  }
};

class SchoolYearSchedule : public ScheduleStructure {
private:
  TimePoint start, end, current;

public:
  SchoolYearSchedule(const TimePoint& currentDate, const TimePoint& start, const TimePoint& end) 
  : ScheduleStructure(1), start(start), end(end), current(currentDate) {}

  int getDaysRemaining() override {
    auto remaining = chrono::duration_cast<Days>(end - current).count();
    return remaining > 0 ? remaining : 0;
  }

  int getDaysUntilNextPeriod() override {
    return getDaysRemaining() + 1;
  }
};
