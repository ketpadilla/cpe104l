/* // * TASK
  Create program that calculates the sum of the cubes
    from 1 to the integer inputted by the user.
*/

#include "includes/helper.h"

int main() {
  int num;
  
  system("clear");
  getNum(num); 

  cout << "  ----------" << endl
    << "  sum :: " << sumCubes(num) 
    << endl << endl; // get and print sum of cubes

  return 0;
}