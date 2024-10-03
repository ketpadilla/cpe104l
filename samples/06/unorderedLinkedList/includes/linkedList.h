#ifndef H_linkedList
#define H_linkedList
   
#include <iostream>
#include <cassert>
 
using namespace std;

//Definition of the node

template <class Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
};

template <class Type>
class linkedListIterator
{
public:
   linkedListIterator();
     //Default constructor
     //Postcondition: current = nullptr;

   linkedListIterator(nodeType<Type> *ptr);
     //Constructor with a parameter.
     //Postcondition: current = ptr;

   Type operator*();
     //Function to overload the dereferencing operator *.
     //Postcondition: Returns the info contained in the node.

   linkedListIterator<Type> operator++();    
     //Overload the pre-increment operator.
     //Postcondition: The iterator is advanced to the next 
     //               node.

   bool operator==(const linkedListIterator<Type>& right) const; 
     //Overload the equality operator.
     //Postcondition: Returns true if this iterator is equal to 
     //               the iterator specified by right, 
     //               otherwise it returns the value false.

   bool operator!=(const linkedListIterator<Type>& right) const; 
     //Overload the not equal to operator.
     //Postcondition: Returns true if this iterator is not  
     //               equal to the iterator specified by  
     //               right; otherwise it returns the value 
     //               false.

private:
   nodeType<Type> *current; //pointer to point to the current 
                            //node in the linked list
};

template <class Type>
linkedListIterator<Type>::linkedListIterator()
{
    current = nullptr;
}

template <class Type>
linkedListIterator<Type>::
                  linkedListIterator(nodeType<Type> *ptr)
{
    current = ptr;
}

template <class Type>
Type linkedListIterator<Type>::operator*()
{
    return current->info;
}

template <class Type>
linkedListIterator<Type> linkedListIterator<Type>::
                                  operator++()   
{
    current = current->link;

    return *this;
}

template <class Type>
bool linkedListIterator<Type>::operator==
               (const linkedListIterator<Type>& right) const
{
    return (current == right.current);
}

template <class Type>
bool linkedListIterator<Type>::operator!=
                 (const linkedListIterator<Type>& right) const
{    return (current != right.current);
}


//*****************  class linkedList   ****************

template <class Type>
class linkedList
{
public:
    const linkedList<Type>& operator=
                         (const linkedList<Type>&);  
      //Overload the assignment operator.

    void initializeList(); 
      //Initialize the list to an empty state.
      //Postcondition: first = nullptr, last = nullptr, 
      //               count = 0;

    bool isEmptyList() const;
      //Function to determine whether the list is empty. 
      //Postcondition: Returns true if the list is empty,
      //               otherwise it returns false.

    void print() const;
      //Function to output the data contained in each node.
      //Postcondition: none

    int length() const;
      //Function to return the number of nodes in the list.
      //Postcondition: The value of count is returned.

    void destroyList();
      //Function to delete all the nodes from the list.
      //Postcondition: first = nullptr, last = nullptr, 
      //               count = 0;

    Type front() const; 
      //Function to return the first element of the list.
      //Precondition: The list must exist and must not be 
      //              empty.
      //Postcondition: If the list is empty, the program
      //               terminates; otherwise, the first 
      //               element of the list is returned.

    Type back() const; 
      //Function to return the last element of the list.
      //Precondition: The list must exist and must not be 
      //              empty.
      //Postcondition: If the list is empty, the program
      //               terminates; otherwise, the last  
      //               element of the list is returned.

    virtual bool search(const Type& searchItem) const = 0;
      //Function to determine whether searchItem is in the list.
      //Postcondition: Returns true if searchItem is in the 
      //               list, otherwise the value false is 
      //               returned.

    virtual void insertFirst(const Type& newItem) = 0;
      //Function to insert newItem at the beginning of the list.
      //Postcondition: first points to the new list, newItem is
      //               inserted at the beginning of the list,
      //               last points to the last node in the list, 
      //               and count is incremented by 1.

    virtual void insertLast(const Type& newItem) = 0;
      //Function to insert newItem at the end of the list.
      //Postcondition: first points to the new list, newItem 
      //               is inserted at the end of the list,
      //               last points to the last node in the 
      //               list, and count is incremented by 1.

    virtual void deleteNode(const Type& deleteItem) = 0;
      //Function to delete deleteItem from the list.
      //Postcondition: If found, the node containing 
      //               deleteItem is deleted from the list.
      //               first points to the first node, last
      //               points to the last node of the updated 
      //               list, and count is decremented by 1.

    linkedListIterator<Type> begin();
      //Function to return an iterator at the begining of 
      //the linked list.
      //Postcondition: Returns an iterator such that current
      //               is set to first.

    linkedListIterator<Type> end();
      //Function to return an iterator one element past the 
      //last element of the linked list. 
      //Postcondition: Returns an iterator such that current 
      //               is set to nullptr.

    linkedList(); 
      //Default constructor
      //Initializes the list to an empty state.
      //Postcondition: first = nullptr, last = nullptr, 
      //               count = 0; 

    linkedList(const linkedList<Type>& otherList); 
      //copy constructor

    ~linkedList();   
      //Destructor
      //Deletes all the nodes from the list.
      //Postcondition: The list object is destroyed. 

protected:
    int count;   //variable to store the number of 
                 //elements in the list
    nodeType<Type> *first; //pointer to the first node of the list
    nodeType<Type> *last;  //pointer to the last node of the list

private: 
    void copyList(const linkedList<Type>& otherList); 
      //Function to make a copy of otherList.
      //Postcondition: A copy of otherList is created and
      //               assigned to this list.
};


template <class Type>
bool linkedList<Type>::isEmptyList() const
{
    return (first == nullptr);
}

template <class Type>
linkedList<Type>::linkedList() //default constructor
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

template <class Type>
void linkedList<Type>::destroyList()
{
    nodeType<Type> *temp;   //pointer to deallocate the memory
                            //occupied by the node
    while (first != nullptr)   //while there are nodes in 
    {                          //the list
        temp = first;        //set temp to the current node
        first = first->link; //advance first to the next node
        delete temp;   //deallocate the memory occupied by temp
    }
    last = nullptr; //initialize last to nullptr; first has 
               //already been set to nullptr by the while loop
    count = 0;
}

template <class Type>
void linkedList<Type>::initializeList()
{
	destroyList(); //if the list has any nodes, delete them
}

template <class Type>
void linkedList<Type>::print() const
{
    nodeType<Type> *current; //pointer to traverse the list

    current = first;    //set current so that it points to 
                        //the first node
    while (current != nullptr) //while more data to print
    {
        cout << current->info << " ";
        current = current->link;
    }
}//end print

template <class Type>
int linkedList<Type>::length() const
{
    return count;
}  //end length

template <class Type>
Type linkedList<Type>::front() const
{   
    assert(first != nullptr);

    return first->info; //return the info of the first node	
}//end front

template <class Type>
Type linkedList<Type>::back() const
{   
    assert(last != nullptr);

    return last->info; //return the info of the last node	
}//end back

template <class Type>
linkedListIterator<Type> linkedList<Type>::begin()
{
    linkedListIterator<Type> temp(first);

    return temp;
}

template <class Type>
linkedListIterator<Type> linkedList<Type>::end()
{
    linkedListIterator<Type> temp(nullptr);

    return temp;
}

template <class Type>
void linkedList<Type>::copyList
                   (const linkedList<Type>& otherList) 
{
    nodeType<Type> *newNode; //pointer to create a node
    nodeType<Type> *current; //pointer to traverse the list

    if (first != nullptr) //if the list is nonempty, make it empty
       destroyList();

    if (otherList.first == nullptr) //otherList is empty
    {
        first = nullptr;
        last = nullptr;
        count = 0;
    }
    else
    {
        current = otherList.first; //current points to the 
                                   //list to be copied
        count = otherList.count;

            //copy the first node
        first = new nodeType<Type>;  //create the node

        first->info = current->info; //copy the info
        first->link = nullptr;        //set the link field of 
                                   //the node to nullptr
        last = first;              //make last point to the
                                   //first node
        current = current->link;     //make current point to
                                     //the next node

           //copy the remaining list
        while (current != nullptr)
        {
            newNode = new nodeType<Type>;  //create a node
            newNode->info = current->info; //copy the info
            newNode->link = nullptr;       //set the link of 
                                        //newNode to nullptr
            last->link = newNode;  //attach newNode after last
            last = newNode;        //make last point to
                                   //the actual last node
            current = current->link;   //make current point 
                                       //to the next node
        }//end while
    }//end else
}//end copyList

template <class Type>
linkedList<Type>::~linkedList() //destructor
{
   destroyList();
}//end destructor

template <class Type>
linkedList<Type>::linkedList
                      (const linkedList<Type>& otherList)
{
    first = nullptr;
    copyList(otherList);
}//end copy constructor

         //overload the assignment operator
template <class Type>
const linkedList<Type>& linkedList<Type>::operator=
                      (const linkedList<Type>& otherList)
{ 
    if (this != &otherList) //avoid self-copy
    {
        copyList(otherList);
    }//end else

     return *this; 
}

#endif
