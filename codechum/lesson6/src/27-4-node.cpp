#include "../includes/27-4-node.h"
using namespace std;

double sumLinkedList(Node* head) {
    Node* current = head;
    double sum = 0;

    while (current != nullptr) {
        double currVal = current->value;
        sum += currVal;

        current = current->next;
    }

    return sum;
}