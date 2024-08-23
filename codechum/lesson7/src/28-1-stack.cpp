#include "includes/28-1-stack.h"
#include <iostream>

Stack::Stack() : head(nullptr) {}

Stack::~Stack() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void Stack::push(char item) {
    Node* newNode = new Node{item, head};
    head = newNode;
}

char Stack::pop() {
    if (head != nullptr) {
        Node* temp = head;
        char value = temp->value;
        head = head->next;
        delete temp;
        return value;
    }
    return '\0'; // Consider handling underflow
}

char Stack::peek() const {
    if (head != nullptr) {
        return head->value;
    }
    return '\0'; // Consider handling underflow
}

bool Stack::isEmpty() const {
    return head == nullptr;
}

void Stack::display() const {
    for (Node* current = head; current != nullptr; current = current->next) {
        std::cout << current->value << std::endl;
    }
}