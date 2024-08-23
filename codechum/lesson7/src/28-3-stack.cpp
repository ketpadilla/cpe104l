#include "includes/28-3-stack.h"
#include <cstdlib>

Stack::Stack() : head(nullptr), top(-1) {}

Stack::~Stack() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void Stack::push(char item) {
    if (!isFull()) {
        Node* newNode = new Node{item, head};
        head = newNode;
        top++;
    }
}

char Stack::pop() {
    if (!isEmpty()) {
        Node* temp = head;
        char value = temp->value;
        head = head->next;
        delete temp;
        top--;
        return value;
    }
    return '\0'; // Consider handling underflow
}

char Stack::peek() const {
    if (!isEmpty()) {
        return head->value;
    }
    return '\0'; // Consider handling underflow
}

bool Stack::isFull() const {
    return top == MAX_SIZE - 1;
}

bool Stack::isEmpty() const {
    return top == -1;
}