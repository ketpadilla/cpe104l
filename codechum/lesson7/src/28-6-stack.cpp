#include "includes/28-6-stack.h"
#include <cstdlib>

Stack::Stack() : head(nullptr), top(-1) {}

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

void Stack::push(int item) {
    if (top < MAX_SIZE - 1) {
        Node* newNode = new Node{item, head};
        head = newNode;
        top++;
    }
}

int Stack::pop() {
    if (!isEmpty()) {
        Node* temp = head;
        int value = temp->value;
        head = head->next;
        delete temp;
        top--;
        return value;
    }
    return 0;
}

int Stack::peek() const {
    if (!isEmpty()) {
        return head->value;
    }
    return 0;
}

bool Stack::isEmpty() const {
    return head == nullptr;
}