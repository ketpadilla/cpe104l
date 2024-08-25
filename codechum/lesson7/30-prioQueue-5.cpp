#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
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

    int total = 0;
    while (!isEmpty(priorityQueue)) {
      value = dequeue(priorityQueue);
      total += value;
      cout << "Value: " << value << ", Running Sum: " << total << endl;
    }
    
    
    return 0;
}