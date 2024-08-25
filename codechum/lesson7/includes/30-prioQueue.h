#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#define MAX_SIZE 100

// Node structure
struct Node {
    int value;
    int priority;
    Node* next;
};

// Priority Queue structure
struct PriorityQueue {
    int count;
    Node* front;
};

// Function prototypes
PriorityQueue* createEmptyPriorityQueue();
bool isFull(PriorityQueue* priorityQueue);
bool isEmpty(PriorityQueue* priorityQueue);
void enqueue(PriorityQueue* priorityQueue, int value, int priority);
int dequeue(PriorityQueue* priorityQueue);
void printPriorityQueue(PriorityQueue* priorityQueue);

#endif // PRIORITY_QUEUE_H