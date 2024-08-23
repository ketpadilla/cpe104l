#include "includes/28-4-stack.h"

Stack::Stack() : head(nullptr), top(-1) {}

Stack::~Stack() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void Stack::push(const std::string& item) {
    if (!isFull()) {
        Node* newNode = new Node{item, head};
        head = newNode;
        top++;
    }
}

std::string Stack::pop() {
    if (!isEmpty()) {
        Node* temp = head;
        std::string value = temp->value;
        head = head->next;
        delete temp;
        top--;
        return value;
    }
    return "";
}

std::string Stack::peek() const {
    if (!isEmpty()) {
        return head->value;
    }
    return "";
}

bool Stack::isFull() const {
    return top == maxSize - 1;
}

bool Stack::isEmpty() const {
    return top == -1;
}