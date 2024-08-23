#include <iostream>
#include <iomanip>
#include "includes/27-4-node.h"

int main() {
    int testCase;
    std::cin >> testCase;

    switch (testCase) {
        case 1: {
            // Test Case 1
            Node* linkedList1 = new Node{0, nullptr};
            Node* node1_1 = new Node{5, nullptr};
            linkedList1->next = node1_1;
            Node* node1_2 = new Node{35.5, nullptr};
            node1_1->next = node1_2;
            Node* node1_3 = new Node{22.13, nullptr};
            node1_2->next = node1_3;
            Node* node1_4 = new Node{100.123, nullptr};
            node1_3->next = node1_4;
            Node* node1_5 = new Node{-10.55, nullptr};
            node1_4->next = node1_5;

            double sum1 = sumLinkedList(linkedList1);
            std::cout << std::fixed << std::setprecision(2) << sum1 << std::endl;

            // Free allocated memory
            Node* current1 = linkedList1;
            while (current1 != nullptr) {
                Node* temp = current1;
                current1 = current1->next;
                delete temp;
            }
            break;
        }
        case 2: {
            // Test Case 2
            Node* linkedList2 = new Node{0, nullptr};
            Node* node2_1 = new Node{10, nullptr};
            linkedList2->next = node2_1;
            Node* node2_2 = new Node{20, nullptr};
            node2_1->next = node2_2;
            Node* node2_3 = new Node{30, nullptr};
            node2_2->next = node2_3;

            double sum2 = sumLinkedList(linkedList2);
            std::cout << std::fixed << std::setprecision(2) << sum2 << std::endl;

            // Free allocated memory
            Node* current2 = linkedList2;
            while (current2 != nullptr) {
                Node* temp = current2;
                current2 = current2->next;
                delete temp;
            }
            break;
        }
        default:
            std::cout << "Invalid test case\n";
            break;
    }

    return 0;
}