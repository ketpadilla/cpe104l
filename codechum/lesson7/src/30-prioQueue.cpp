#include <iostream>
#include "30-prioQueue.h"

PriorityQueue* createEmptyPriorityQueue() {
    PriorityQueue* priorityQueue = new PriorityQueue;
    priorityQueue->count = 0;
    priorityQueue->front = nullptr;
    return priorityQueue;
}

bool isFull(PriorityQueue* priorityQueue) {
    return priorityQueue->count == MAX_SIZE;
}

bool isEmpty(PriorityQueue* priorityQueue) {
    return priorityQueue->count == 0;
}

void enqueue(PriorityQueue* priorityQueue, int value, int priority) {
    if (!isFull(priorityQueue)) {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->priority = priority;
        newNode->next = nullptr;

        if (isEmpty(priorityQueue) || priority > priorityQueue->front->priority) {
            newNode->next = priorityQueue->front;
            priorityQueue->front = newNode;
        } else {
            Node* current = priorityQueue->front;
            while (current->next != nullptr && current->next->priority >= priority) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
        priorityQueue->count++;
    }
}

int dequeue(PriorityQueue* priorityQueue) {
    if (!isEmpty(priorityQueue)) {
        Node* firstItem = priorityQueue->front;
        int dequeuedValue = firstItem->value;

        priorityQueue->front = firstItem->next;
        priorityQueue->count--;

        delete firstItem;
        return dequeuedValue;
    }
    return 0;
}

void printPriorityQueue(PriorityQueue* priorityQueue) {
    Node* temp = priorityQueue->front;
    while (temp != nullptr) {
        std::cout << temp->value << "(" << temp->priority << ") ";
        temp = temp->next;
    }
    std::cout << "\n";
}