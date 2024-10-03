/* // * TASK
  Implement copyConstrutor and overload the assignment "=" 
    to copy a queue into another queue and use it with
    the provided sample queue.
*/

#include "includes/helper.h"

int main()
{
    /* // !!! ISSUE
        When using printQueue, the message "Cannot remove from an empty queue"
            prompts after the last element is deleted from the list.
            The issue comes from the implementation of linkedQueue.h
            (i.e., in deleteQueue())

        This issue if left unsolved as of Oct 04, 2024
    */
   
    linkedQueue<int> queue;

    system("clear");
    initializeSampleQueue(queue);

        // use the copy constructor
    linkedQueue<int> copyQueue1 = queue;

        // use the overloaded "=" operator
    linkedQueue<int> copyQueue2;
    copyQueue2 = queue;

        // print queues
    cout << "Queue Elements" << endl
        << "Original" << endl
        << "::";
    printQueue(queue);

    cout << endl 
        << "Copy (via constructor)" << endl
        << "::";
    printQueue(copyQueue1);

    cout << endl 
        << "Copy (via assignment overload)" << endl
        << "::";
    printQueue(copyQueue2);

    cout << endl;
    return 0;
}

