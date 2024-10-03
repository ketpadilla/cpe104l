//Header file arrayList.h

#ifndef H_arrayList
#define H_arrayList 
 
#include <iostream> 
#include "arrayList.h" 

using namespace std;

class arrayList 
{
public:
    bool isEmpty() const;
      //Function to determine whether the list is empty
      //Postcondition: Returns true if the list is empty;
      //               otherwise, returns false.

    bool isFull() const;
      //Function to determine whether the list is full
      //Postcondition: Returns true if the list is full; 
      //               otherwise, returns false.

    int listSize() const;
      //Function to determine the number of elements in 
      //the list.
      //Postcondition: Returns the value of length.

    int maxListSize() const;
      //Function to determine the maximum size of the list
      //Postcondition: Returns the value of maxSize.

    void print() const;
      //Function to output the elements of the list
      //Postcondition: Elements of the list are output on the 
      //               standard output device.

    bool isItemAtEqual(int location, int item) const;
      //Function to determine whether item is the same as
      //the item in the list at the position specified 
      //by location.
      //Postcondition: Returns true if list[location] 
      //               is the same as item; otherwise, 
      //               returns false.
      //               If location is out of range, an 
      //               appropriate message is displayed.

    virtual void insertAt(int location, int insertItem) = 0;
      //Function to insert insertItem in the list at the 
      //position specified by location. 
      //Note that this is an abstract function.
      //Postcondition: Starting at location, the elements of 
      //               the list are shifted down, 
      //               list[location] = insertItem; length++;    
      //               If the list is full or location is
      //               out of range, an appropriate message 
      //               is displayed.

    virtual void insertEnd(int insertItem) = 0;
      //Function to insert insertItem an item at the end of 
      //the list. Note that this is an abstract function.
      //Postcondition: list[length] = insertItem; and length++;
      //               If the list is full, an appropriate 
      //               message is displayed.

    void removeAt(int location);
      //Function to remove the item from the list at the 
      //position specified by location 
      //Postcondition: The list element at list[location] is 
      //               removed and length is decremented by 1.
      //               If location is out of range, an 
      //               appropriate message is displayed.

    void retrieveAt(int location, int& retItem) const;
      //Function to retrieve the element from the list   
      //at the position specified by location 
      //Postcondition: retItem = list[location] 
      //               If location is out of range, an 
      //               appropriate message is displayed.

    virtual void replaceAt(int location, int repItem) = 0;
      //Function to replace the elements in the list 
      //at the position specified by location. 
      //Note that this is an abstract function.
      //Postcondition: list[location] = repItem 
      //               If location is out of range, an 
      //               appropriate message is displayed.

    void clearList();
      //Function to remove all the elements from the list 
      //After this operation, the size of the list is zero.
      //Postcondition: length = 0;

    virtual int seqSearch(int searchItem) const = 0;
      //Function to search the list for searchItem.
      //Note that this is an abstract function.
      //Postcondition: If the item is found, returns the 
      //               location in the array where the item   
      //               is found; otherwise, returns -1.

    virtual void remove(int removeItem) = 0;
      //Function to remove removeItem from the list.
      //Note that this is an abstract function.
      //Postcondition: If removeItem is found in the list,
      //               it is removed from the list and  
      //               length is decremented by one.

    arrayList(int size = 100);
      //Constructor
      //Creates an array of the size specified by the 
      //parameter size. The default array size is 100.
      //Postcondition: The list points to the array, 
      //               length = 0, and maxSize = size;

    arrayList (const arrayList& otherList);
       //Copy constructor

    virtual ~arrayList();
      //Destructor
      //Deallocate the memory occupied by the array.

protected:
    int *list;    //array to hold the list elements
    int length;   //variable to store the length of the list
    int maxSize;  //variable to store the maximum 
                  //size of the list
};

bool arrayList::isEmpty() const
{
    return (length == 0);
} //end isEmpty

bool arrayList::isFull() const  
{
    return (length == maxSize);
} //end isFull

int arrayList::listSize() const
{
	return length;
} //end listSize

int arrayList::maxListSize() const
{
	return maxSize;
} //end maxListSize

void arrayList::print() const
{
    for (int i = 0; i < length; i++)
        cout << list[i] << " ";
    cout << endl;
} //end print

bool arrayList::isItemAtEqual(int location, int item)  const
{
    if (location < 0 || location >= length)
    {
        cout << "The location of the item to be removed "
             << "is out of range." << endl;

        return false;
    }
    else
        return (list[location] == item);
} //end isItemAtEqual

void arrayList::removeAt(int location)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be removed "
             << "is out of range." << endl;
    else
    {
        for (int i = location; i < length - 1; i++)
            list[i] = list[i+1];

        length--;
    }
} //end removeAt

void arrayList::retrieveAt(int location, int& retItem) const
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be retrieved is "
             << "out of range" << endl;
    else
        retItem = list[location];
} //end retrieveAt

void arrayList::clearList()
{
    length = 0;
} //end clearList

arrayList::arrayList(int size)
{
    if (size <= 0)
    {
        cout << "The array size must be positive. Creating "
             << "an array of the size 100." << endl;

        maxSize = 100;
    }
    else
        maxSize = size;

    length = 0;

    list = new int[maxSize];
} //end constructor

arrayList::~arrayList()
{
    delete [] list;
} //end destructor

arrayList::arrayList(const arrayList& otherList)
{
    maxSize = otherList.maxSize;
    length = otherList.length;

    list = new int[maxSize]; 	//create the array

    for (int j = 0; j < length; j++)  //copy otherList
        list [j] = otherList.list[j];
}//end copy constructor

#endif
