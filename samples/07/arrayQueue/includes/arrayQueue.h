//Header file: arrayQueue.h
 
#ifndef H_QueueAsArray
#define H_QueueAsArray
  
#include <iostream> 
#include <cassert>

#include "queueADT.h" 

using namespace std;

template <class Type>
class queueArray: public queueADT<Type>
{
public:
    const queueArray<Type>& operator=(const queueArray<Type>&); 
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
      //Postcondition: The queue is empty.

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
      //Function to remove the first element of the queue.
      //Precondition: The queue exists and is not empty.
      //Postcondition: The queue is changed and the first 
      //               element is removed from the queue.

    queueArray(int queueSize = 100); 
      //Constructor

    queueArray(const queueArray<Type>& otherQueue); 
      //Copy constructor

    ~queueArray(); 
      //Destructor

private:
    void copyQueue(const queueArray<Type>& otherQueue);
      //Function to make a copy of otherQueue.
      //Postcondition: A copy of otherQueue is created and
      //               assigned to this queue.
    int maxQueueSize; //variable to store the maximum queue size
    int count;        //variable to store the number of
                      //elements in the queue
    int queueFront;   //variable to point to the first
                      //element of the queue
    int queueRear;    //variable to point to the last
                      //element of the queue
    Type *list;       //pointer to the array that holds 
                      //the queue elements 
};

template <class Type>
bool queueArray<Type>::isEmptyQueue() const
{
    return (count == 0);
} //end isEmptyQueue

template <class Type>
bool queueArray<Type>::isFullQueue() const
{
    return (count == maxQueueSize);
} //end isFullQueue

template <class Type>
void queueArray<Type>::initializeQueue()
{
    queueFront = 0;
    queueRear = maxQueueSize - 1;
    count = 0;
} //end initializeQueue

template <class Type>
Type queueArray<Type>::front() const
{
    assert(!isEmptyQueue());
    return list[queueFront]; 
} //end front

template <class Type>
Type queueArray<Type>::back() const
{
    assert(!isEmptyQueue());
    return list[queueRear];
} //end back

template <class Type>
void queueArray<Type>::addQueue(const Type& newElement)
{
    if (!isFullQueue())
    {   
        queueRear = (queueRear + 1) % maxQueueSize; //use mod
                            //operator to advance queueRear  
                            //because the array is circular
        count++;
        list[queueRear] = newElement;
    }
    else
        cout << "Cannot add to a full queue." << endl; 
} //end addQueue

template <class Type>
void queueArray<Type>::deleteQueue()
{
    if (!isEmptyQueue())
    {   
        count--;
        queueFront = (queueFront + 1) % maxQueueSize; //use the
                        //mod operator to advance queueFront 
                        //because the array is circular 
    }
    else
        cout << "Cannot remove from an empty queue." << endl;
} //end deleteQueue

    //Constructor
template <class Type>
queueArray<Type>::queueArray(int queueSize)   
{
    if (queueSize <= 0)
    {
        cout << "Size of the array to hold the queue must "
             << "be positive." << endl;
        cout << "Creating an array of size 100." << endl;

        maxQueueSize = 100;
    }
    else
        maxQueueSize = queueSize;   //set maxQueueSize to 
                                    //queueSize

    queueFront = 0;                 //initialize queueFront
    queueRear = maxQueueSize - 1;   //initialize queueRear
    count = 0;
    list = new Type[maxQueueSize];  //create the array to
                                    //hold the queue elements
} //end constructor

template <class Type>
void queueArray<Type>::copyQueue(const queueArray<Type>& otherQueue)
{

    if (list != nullptr) //if the list if nonempty, make it empty 
        delete[] list;

    maxQueueSize = otherQueue.maxQueueSize; // copy constructor components of otherQueue
    count = otherQueue.count;
    queueFront = otherQueue.queueFront;
    queueRear = otherQueue.queueRear;

    if (otherQueue.count == 0) //otherQueue is empty
    {
        list = nullptr; // no allocation required
        return;
    }//end else
    
    list = new Type[maxQueueSize]; // create queue

      // copy elements from otherQueue
    for (int i = 0; i < maxQueueSize; i++) 
        list[i] = otherQueue.list[i];
} //end copyQueue

    //Destructor
template <class Type>
queueArray<Type>::~queueArray()   
{
    delete [] list;
} //end destructor

          //overload the assignment operator
template <class Type>
const queueArray<Type>& queueArray<Type>::operator=
	                   (const queueArray<Type>& otherQueue)
{
    if (this != &otherQueue) //avoid self-copy
    {
      copyQueue(otherQueue);
    }//end else

    return *this;
} //end assignment operator

template <class Type>
queueArray<Type>::queueArray(const queueArray<Type>& otherQueue)
{
    list = nullptr;
    copyQueue(otherQueue);
} //end copy constructor

#endif
