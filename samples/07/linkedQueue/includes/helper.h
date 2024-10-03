//Header File: helper.h
 
#ifndef H_Helper
#define H_Helper 

#include <iostream>
#include "./linkedQueue.h"
using namespace std;

void initializeSampleQueue(linkedQueue<int>& queue) {
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

void printQueue(linkedQueue<int>& queue) {
    while (!queue.isEmptyQueue()) {
        cout << " " << queue.front();
        queue.deleteQueue(); // print and then delete the first element
    } cout << endl; 
} //end printQueue

#endif