#ifndef STACK_H
#define STACK_H

class Stack {
public:
    Stack();
    ~Stack();
    void push(char item);
    char pop();
    char peek() const;
    bool isEmpty() const;
    void display() const;

private:
    struct Node {
        char value;
        Node* next;
    };

    Node* head;
};

#endif // STACK_H