#include <iostream>
#include "linkedList.h"
using namespace std;

LinkedList::LinkedList() : head(nullptr), count(0) {};

LinkedList::~LinkedList() {
  Node* current = head;
  count = 0;

  while (current != nullptr) {
    Node* nextNode = current->next;
    delete current;
    current = nextNode;
  }
}

bool LinkedList::isListEmpty() const {
  return (head == nullptr); // true if head does not point to a node
}

void LinkedList::print() const {
  Node* current = head;

  while (current != nullptr) {
    cout << current->data << " ";
    current = current->next;
  } // print elements in series
}

int LinkedList::length() const {
  return count; // returns to # of nodes in the list
}

void LinkedList::appendNode(int val) { // add a node to the end of the list
  Node *newNode = new Node(val);
  count++;

  if (head == nullptr) {
    head = newNode;

  } else {
    Node* temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    } // traverse to the end

    temp->next = newNode;
  }
}

void LinkedList:: prependNode(int val) { // add a node to the top of the list
  Node *newNode = new Node(val);
  count++;

  newNode->next = head;
  head = newNode;
}

//TODO  