#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include "30-prioQueue.h"
using namespace std;

int main() {
    PriorityQueue* priorityQueue = createEmptyPriorityQueue();
    string expression; const char* cstring;
    int len, idx, value, priority;

    cout << "Enter operations:" << endl; 
    while (true) {
      getline(cin, expression);

      cstring = expression.c_str();

      if (cstring[0] == '#') {
        break;
      }

      if (cstring[0] == '-') {
        dequeue(priorityQueue);
        continue;
      }

      len = expression.length();
      value = 0; int terms[len], highestExpo = 0;
      
      for (int i = 2; i < len; i++) {
          for (int j = 2; j < len; j++) {
              if (cstring[j] == ' ') {
                  break;
              }
              
              terms[j - 2] = int(cstring[j]) - 48;
              highestExpo++;
          }
          
          for (int k = 0; k < highestExpo; k++) {
              value += terms[k] * pow(10, highestExpo - k - 1);
          }
          
          idx = highestExpo + 3;
          priority = 0;
          for (int l = idx; l < len; l++) {
              priority += (int(cstring[l]) - 48) * pow(10, len - l - 1);
          }
          
          enqueue(priorityQueue, value, priority);
          break;
      }
    }

    double total = 0; int noTerms = 0;
    cout << fixed << setprecision(2);
    while (!isEmpty(priorityQueue)) {
      total += dequeue(priorityQueue);
      noTerms++;
      cout << "Running Average: " << total/noTerms << endl;
    }
    
    
    return 0;
}