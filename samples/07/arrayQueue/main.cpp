/* // * TASK
  Implement copyConstrutor and overload the assignment "=" 
    to copy a queue into another queue and use it with
    the provided sample queue.
*/

#include "includes/helper.h"

int main()
{
    queueArray<int> queue;

    system("clear");
    initializeSampleQueue(queue);

        // use the copy constructor
    queueArray<int> copyQueue1 = queue;

        // use the overloaded "=" operator
    queueArray<int> copyQueue2;
    copyQueue2 = queue;

        // print queues
    cout << "Queue Elements" << endl
        << "Original" << endl
        << "::";
    printQueueElements(queue);

    cout << endl 
        << "Copy (via constructor)" << endl
        << "::";
    printQueueElements(copyQueue1);

    cout << endl 
        << "Copy (via assignment overload)" << endl
        << "::";
    printQueueElements(copyQueue2);

    cout << endl;
    return 0;
}

