#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

class Stack {
public:
    Stack();
    ~Stack();
    void push(int item);
    int pop();
    int peek() const;
    bool isEmpty() const;

private:
    struct Node {
        int value;
        Node* next;
    };

    Node* head;
    int top;
};

#endif // STACK_H