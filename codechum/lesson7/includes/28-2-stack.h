#ifndef STACK_H
#define STACK_H

struct Stack {
    int top;
    int value;
    Stack* next;
};

Stack* createEmptyStack();
bool isFull(Stack* stack);
bool isEmpty(Stack* stack);
void push(Stack* stack, int item);
int pop(Stack* stack);
int peek(Stack* stack);
void display(Stack* stack);

#endif // STACK_H