#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 100

// Node structure
struct Node {
    int value;
    Node* next;
};

// Queue structure
struct Queue {
    int count;
    Node* rear;
    Node* front;
    double sum;
};

// Function prototypes
Queue* createEmptyQueue();
bool isFull(Queue* queue);
bool isEmpty(Queue* queue);
void enqueue(Queue* queue, int item);
int dequeue(Queue* queue);
void printQueue(Queue* queue);

#endif // QUEUE_H