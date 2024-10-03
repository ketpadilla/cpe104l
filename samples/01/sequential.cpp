#include <iostream>
using namespace std;


int main() {
  int amt, denominations[9] = {1000, 500, 200, 100, 50, 20, 10, 5, 1}, quantities[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

  cout << "Enter amount: "; cin >> amt;

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
  
  cout << "1000 pesos: " << quantities[0] << endl;
  cout << "500 pesos: " << quantities[1] << endl;
  cout << "200 pesos: " << quantities[2] << endl;
  cout << "100 pesos: " << quantities[3] << endl;
  cout << "50 pesos: " << quantities[4] << endl;
  cout << "20 pesos: " << quantities[5] << endl;
  cout << "10 pesos: " << quantities[6] << endl;
  cout << "5 pesos: " << quantities[7] << endl;
  cout << "1 peso: " << quantities[8] << endl;

  return 0;
}