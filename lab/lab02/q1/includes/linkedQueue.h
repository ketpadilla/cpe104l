//Header file linkedQueue.h
 
#ifndef H_linkedQueue
#define H_linkedQueue 
  
#include <iostream>
#include <cassert>

#include "node.h"
#include "queueADT.h"
 
using namespace std;

template <class Type>
class linkedQueue: public queueADT<Type>
{
public:
    const linkedQueue<Type>& operator=
                    (const linkedQueue<Type>&); 
      //Overload the assignment operator.

    bool isEmptyQueue() const;
      //Function to determine whether the queue is empty. 
      //Postcondition: Returns true if the queue is empty,
      //               otherwise returns false.
     
    bool isFullQueue() const;
      //Function to determine whether the queue is full. 
      //Postcondition: Returns true if the queue is full,
      //               otherwise returns false.

    void initializeQueue();
      //Function to initialize the queue to an empty state.
      //Postcondition: queueFront = nullptr; queueRear = nullptr

    Type front() const;
      //Function to return the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: If the queue is empty, the program 
      //               terminates; otherwise, the first 
      //               element of the queue is returned. 

    Type back() const;
      //Function to return the last element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: If the queue is empty, the program 
      //               terminates; otherwise, the last 
      //               element of the queue is returned.

    void addQueue(const Type& queueElement);
      //Function to add queueElement to the queue.
      //Precondition: The queue exists and is not full.
      //Postcondition: The queue is changed and queueElement
      //               is added to the queue.

    void deleteQueue();
      //Function  to remove the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: The queue is changed and the first 
      //               element is removed from the queue.

    void print();
      //Function to print all the elements of the queue in a single line.
      //Precondition: The queue exists.
      //Postcondition: If the queue is empty, the program 
      //               continues wihout printing; otherwise, 
      //               all elements of the queue are printed.

    void copyQueue(const linkedQueue<Type>& otherQueue);
      //Function to make a copy of otherQueue.
      //Postcondition: A copy of otherQueue is created and
      //               assigned to this queue.

    linkedQueue(); 
      //Default constructor

    linkedQueue(const linkedQueue<Type>& otherQueue); 
      //Copy constructor

    ~linkedQueue(); 
      //Destructor

private:
    nodeType<Type> *queueFront; //pointer to the front of 
                                //the queue
    nodeType<Type> *queueRear;  //pointer to the rear of 
                                //the queue
};

    //Default constructor
template <class Type>
linkedQueue<Type>::linkedQueue() 
{
    queueFront = nullptr; //set front to nullptr
    queueRear = nullptr;  //set rear to nullptr
} //end default constructor

template <class Type>
bool linkedQueue<Type>::isEmptyQueue() const
{
    return (queueFront == nullptr);
} //end isEmptyQueue

template <class Type>
bool linkedQueue<Type>::isFullQueue() const
{
    return false;
} //end isFullQueue

template <class Type>
void linkedQueue<Type>::initializeQueue()
{
    nodeType<Type> *temp;

    while (queueFront!= nullptr)  //while there are elements 
                                  //left in the queue
    {
        temp = queueFront;  //set temp to point to the 
                            //current node
        queueFront = queueFront->link;  //advance first to  
                                        //the next node
        delete temp;    //deallocate memory occupied by temp
    }

    queueRear = nullptr;  //set rear to nullptr
} //end initializeQueue


template <class Type>
void linkedQueue<Type>::addQueue(const Type& newElement)
{
    nodeType<Type> *newNode;

    newNode = new nodeType<Type>;   //create the node

    newNode->info = newElement; //store the info
    newNode->link = nullptr;    //initialize the link 
                                //field to nullptr

    if (queueFront == nullptr) //if initially the queue is empty
    {
        queueFront = newNode;
        queueRear = newNode;
    }
    else        //add newNode at the end
    {
        queueRear->link = newNode;
        queueRear = queueRear->link;
    }
}//end addQueue

template <class Type>
Type linkedQueue<Type>::front() const
{
    assert(queueFront != nullptr);
    return queueFront->info; 
} //end front

template <class Type>
Type linkedQueue<Type>::back() const
{
    assert(queueRear!= nullptr);
    return queueRear->info;
} //end back

template <class Type>
void linkedQueue<Type>::deleteQueue()
{
    nodeType<Type> *temp;
   
    if (!isEmptyQueue())
    {
        temp = queueFront;  //make temp point to the 
                            //first node
        queueFront = queueFront->link; //advance queueFront 

        delete temp;    //delete the first node

        if (queueFront == nullptr) //if after deletion the 
                                   //queue is empty
            queueRear = nullptr;   //set queueRear to nullptr
    }
    else
        cout << "Cannot remove from an empty queue" << endl;
}//end deleteQueue

template <class Type>
void linkedQueue<Type>::print() 
{
    nodeType<Type> *current = queueFront;

    cout << "Queue: ";
    while (current != nullptr) 
    {
        cout << current->info << " ";
        current = current->link;
    } 

    delete current;
    cout << endl;
}

template <class Type>
void linkedQueue<Type>::copyQueue(const linkedQueue<Type>& otherQueue)
{
    if (otherQueue.queueFront == nullptr) // If otherQueue is empty
    {
        queueFront = nullptr;
        queueRear = nullptr;
    }
    else
    {
        nodeType<Type>* current = otherQueue.queueFront;
        while (current != nullptr)
        {
            addQueue(current->info); 
            current = current->link; 
        }
    }
}

    //Destructor
template <class Type>
linkedQueue<Type>::~linkedQueue() 
{
    initializeQueue();
} //end destructor

template <class Type>
const linkedQueue<Type>& linkedQueue<Type>::operator=
                    (const linkedQueue<Type>& otherQueue)
{
    if (this != &otherQueue)
    {
        initializeQueue();
        copyQueue(otherQueue); 
    }

    return *this;
} //end assignment operator

	//copy constructor
template <class Type>
linkedQueue<Type>::linkedQueue
                 (const linkedQueue<Type>& otherQueue) 
{
    queueFront = nullptr;
    queueRear = nullptr;
    copyQueue(otherQueue);
}//end copy constructor

#endif
