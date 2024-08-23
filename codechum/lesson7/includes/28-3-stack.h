#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 100

class Stack {
public:
    Stack();
    ~Stack();
    void push(char item);
    char pop();
    char peek() const;
    bool isFull() const;
    bool isEmpty() const;

private:
    struct Node {
        char value;
        Node* next;
    };

    Node* head;
    int top;
};

#endif // STACK_H