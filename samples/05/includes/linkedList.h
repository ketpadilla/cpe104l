#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class LinkedList {
  public:
    LinkedList(); // create a linked list
    ~LinkedList() {}; // delete all list elements

    bool isListEmpty() const; // checks is list is empty
    void print() const; // prints the list's elements
    int length() const; // prints the # of nodes in the list

    // ? Turn to virtual (to change for ordered linked list)
    void appendNode(int val) {}; // add a node to the bottom
    void prependNode(int val) {}; // add a node to the top
    
    // ? addNode(int val) for only ordered linked

    //TODO
    //! search
    //! remove
    //! 
    
    // ? In implementation
    /*
      begin()
      end()
      copy
      front()
      back()

      iterator??
    */

  private:
    Node* head;
    Node* tail;
    int count;
};

#endif