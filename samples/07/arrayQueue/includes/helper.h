//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
#include "./arrayQueue.h"
using namespace std;

void initializeSampleQueue(queueArray<int>& queue) {
    queue.initializeQueue(); 
    int x = 4, y = 5;

    queue.addQueue(x);
    queue.addQueue(y);

    x = queue.front(); 
    queue.deleteQueue();

    queue.addQueue(x + 5);
    queue.addQueue(16);
    queue.addQueue(x);
    queue.addQueue(y - 3);
} //end initializeSampleQueue

void printQueueElements(queueArray<int>& queue) {
    while (!queue.isEmptyQueue()) {
        cout << " " << queue.front();
        queue.deleteQueue(); // print then delete first element
    } cout << endl;
} //end printQueueElements

#endif