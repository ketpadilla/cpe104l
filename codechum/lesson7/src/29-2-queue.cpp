#include <iostream>
#include "includes/29-2-queue.h"

Queue* createEmptyQueue() {
    Queue* queue = new Queue;
    queue->count = 0;
    queue->rear = nullptr;
    queue->front = nullptr;
    queue->sum = 0;
    return queue;
}

bool isFull(Queue* queue) {
    return queue->count == MAX_SIZE;
}

bool isEmpty(Queue* queue) {
    return queue->count == 0;
}

void enqueue(Queue* queue, int item) {
    if (!isFull(queue)) {
        Node* newItem = new Node;
        newItem->value = item;
        newItem->next = nullptr;

        if (queue->rear != nullptr) {
            queue->rear->next = newItem;
        }

        queue->rear = newItem;
        queue->sum += item; // Add item to sum
        queue->count++;

        if (queue->front == nullptr) {
            queue->front = newItem;
        }
    }
}

int dequeue(Queue* queue) {
    if (!isEmpty(queue)) {
        Node* firstItem = queue->front;
        int dequeuedValue = firstItem->value;

        if (firstItem != nullptr) {
            queue->front = firstItem->next;
        }

        queue->sum -= dequeuedValue; // Subtract dequeued value from sum
        queue->count--;

        if (queue->front == nullptr) {
            queue->rear = nullptr;
        }

        delete firstItem;
        return dequeuedValue;
    }
    return 0;
}

void printQueue(Queue* queue) {
    Node* temp = queue->front;
    while (temp != nullptr) {
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}