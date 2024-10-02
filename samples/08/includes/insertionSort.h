#include <iostream>
using namespace std;

template<class elemType>
void printListIteration(const elemType arr[], int length, int iteration) {
  cout << "\t" << iteration << "\t";
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  } cout << endl;
}

template<class elemType>
void printList(const elemType arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  } cout << endl;
}

template <class elemType>
void insertionSort(elemType list[], int length)
{
    cout << "Itertation:\tList:" << endl;

    for (int firstOutOfOrder = 1; firstOutOfOrder < length;
                                  firstOutOfOrder++) {

        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            elemType temp = list[firstOutOfOrder];
            int location = firstOutOfOrder;

            do
            {
                list[location] = list[location - 1];
                location--;
            } 
            while(location > 0 && list[location - 1] > temp);

            list[location] = temp;
        }

        printListIteration(list, length, firstOutOfOrder);
    }
} //end insertionSort