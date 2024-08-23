#include <cstdlib>
#include <iostream>
#include "includes/28-2-stack.h"
#define MAX_SIZE 100

Stack* createEmptyStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

bool isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, int item) {
    if (!isFull(stack)) {
        Stack* nextNode = stack->next;
        Stack* newNode = (Stack*)malloc(sizeof(Stack));
        newNode->value = item;
        newNode->next = nextNode;
        stack->next = newNode;
        stack->top++;
    }
}

int pop(Stack* stack) {
    if (!isEmpty(stack)) {
        Stack* firstNode = stack->next;
        Stack* secondNode = firstNode->next;
        stack->next = secondNode;
        stack->top--;
        int poppedValue = firstNode->value;
        free(firstNode);
        return poppedValue;
    }
    return 0;
}

int peek(Stack* stack) {
    return (!isEmpty(stack)) ? stack->next->value : 0;
}

void display(Stack* stack) {
    for (Stack* current = stack->next; current != NULL; current = current->next) {
        std::cout << current->value << std::endl;
    }
}