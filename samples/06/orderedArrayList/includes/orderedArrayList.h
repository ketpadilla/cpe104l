#ifndef H_orderedArrayList
#define H_orderedArrayList
 
#include <iostream>
#include "arrayList.h"  
using namespace std;  

class orderedArrayList: public arrayList
{
public:
    void insertAt(int location, int insertItem);
    void insertEnd(int insertItem);
    void replaceAt(int location, int repItem);
    int seqSearch(int searchItem) const;
    void insert(int insertItem);
    void remove(int removeItem);
    void print();

    orderedArrayList(int size = 100);
       //Constructor
};
 
void orderedArrayList::insert(int insertItem)
{
    if (length == 0)          //list is empty
        list[length++] = insertItem;  //insert insertItem
                                      //and increment length
    else if (length == maxSize)
        cout << "Cannot insert in a full list." << endl;
    else
    {
          //Find the location in the list where to insert 
          //insertItem.
        int loc;

        bool found = false;

        for (loc = 0; loc < length; loc++)
        {
            if (list[loc] >= insertItem)
            {
                found = true;
                break;
            }
        }

        for (int i = length; i > loc; i--)
             list[i] = list[i - 1];  //move the elements down

        list[loc] = insertItem;  //insert insertItem
        length++;   //increment the length
    }
} //end insert

void orderedArrayList::insertAt(int location, int insertItem)
{
    cout << "List is ordered. Inserting in order." << endl;
    insert(insertItem); // insert in order
} //end insertAt

void orderedArrayList::insertEnd(int insertItem)
{
    cout << "List is ordered. Inserting in order." << endl;
    insert(insertItem); // insert in order
} //end insertEnd

void orderedArrayList::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length) {
        cout << "The location of the item to be "
             << "replaced is out of range." << endl;
    } else {
        remove(list[location]); // remove old item
        insert(repItem); // insert new item
    }
} //end replaceAt

int orderedArrayList::seqSearch(int searchItem) const 
{
    int loc;
    bool found = false;

    loc = 0;

    while (loc < length && !found)
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

void orderedArrayList::remove(int removeItem)
{
    int loc;
    
    if (length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove

void orderedArrayList::print()
{
    cout << endl 
        << "ORDERED LIST" << endl
        << ":: ";
    for (int i = 0; i < length; i++) {
        cout << list[i] << " ";
    } cout << endl;
} //end print

orderedArrayList::orderedArrayList(int size)
                 : arrayList(size)
{
} //end constructor

#endif
