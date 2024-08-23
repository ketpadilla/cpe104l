#include "includes/28-5-stack.h"
#include <cstdlib>

Stack::Stack() : head(nullptr) {}

Stack::~Stack() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void Stack::push(const std::string& item) {
    Node* newNode = new Node{item, head};
    head = newNode;
}

std::string Stack::pop() {
    if (head != nullptr) {
        Node* temp = head;
        std::string value = temp->value;
        head = head->next;
        delete temp;
        return value;
    }
    return "";
}

std::string Stack::peek() const {
    if (head != nullptr) {
        return head->value;
    }
    return "";
}

bool Stack::isEmpty() const {
    return head == nullptr;
}