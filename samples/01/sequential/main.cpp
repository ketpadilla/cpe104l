/* // * TASK
  Create a program that counts the number of bills
    for an inputted amount of money:
    Bills denominations: 
      1000
      500
      200
      100
      50
      20
      10
      5
      1

  The program can only be programmed sequentially 
    (i.e., no loops, selection structures, and functions)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int amt, denominations[9] = {1000, 500, 200, 100, 50, 20, 10, 5, 1}, 
    quantities[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, spacing = 25;

  system("clear");
  cout << "GET AMOUNT OF BILLS PER DENOMINATION" << endl
    << "Enter amount (PhP): "; cin >> amt; // prompt input

    // calculate denominations
  quantities[0] = (amt - (amt % denominations[0]))/denominations[0];
  amt -= denominations[0] * quantities[0];
  quantities[1] = (amt - (amt % denominations[1]))/denominations[1];
  amt -= denominations[1] * quantities[1];
  quantities[2] = (amt - (amt % denominations[2]))/denominations[2];
  amt -= denominations[2] * quantities[2];
  quantities[3] = (amt - (amt % denominations[3]))/denominations[3];
  amt -= denominations[3] * quantities[3];
  quantities[4] = (amt - (amt % denominations[4]))/denominations[4];
  amt -= denominations[4] * quantities[4];
  quantities[5] = (amt - (amt % denominations[5]))/denominations[5];
  amt -= denominations[5] * quantities[5];
  quantities[6] = (amt - (amt % denominations[6]))/denominations[6];
  amt -= denominations[6] * quantities[6];
  quantities[7] = (amt - (amt % denominations[7]))/denominations[7];
  amt -= denominations[7] * quantities[7];
  quantities[8] = (amt - (amt % denominations[8]))/denominations[8];
  amt -= denominations[8] * quantities[8];
  
    // print header
  cout << endl << left << setw(spacing) << setfill(' ') 
    << "Denominations (PhP)" << setw(spacing) 
    << "Quantity" << endl;

    // print results
  cout << setw(spacing) << setfill(' ') 
    << denominations[0] << setw(spacing) << quantities[0] << endl << setw(spacing) << setfill(' ') 
    << denominations[1] << setw(spacing) << quantities[1] << endl << setw(spacing) << setfill(' ') 
    << denominations[2] << setw(spacing) << quantities[2] << endl << setw(spacing) << setfill(' ') 
    << denominations[3] << setw(spacing) << quantities[3] << endl << setw(spacing) << setfill(' ') 
    << denominations[4] << setw(spacing) << quantities[4] << endl << setw(spacing) << setfill(' ') 
    << denominations[5] << setw(spacing) << quantities[5] << endl << setw(spacing) << setfill(' ') 
    << denominations[6] << setw(spacing) << quantities[6] << endl << setw(spacing) << setfill(' ') 
    << denominations[7] << setw(spacing) << quantities[7] << endl << setw(spacing) << setfill(' ') 
    << denominations[8] << setw(spacing) << quantities[8] << endl << endl;

  return 0;
}