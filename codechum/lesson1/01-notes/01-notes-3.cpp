// ! LESSON 1
// ? TOPIC 3: DATA TYPES
// Directives
#include <iostream>
#include <string>
#include <climits>
using namespace std;


// Global variables (w/ description, format specifier, & byte size)
// * Interger Data Types
int integer;
/*
  whole numbers
  %d, %i
  4 bytes
  range: -2,147,483,648 to 2,147,483,647
*/

short shortInteger;
/*
  whole numbers
  %hd
  2 bytes
  range: -32,768 to 32,767
*/

long longInteger;
/*
  whole numbers
  %ld
  4 bytes

  represents larger integer values
*/

long long longLongInteger;
/*
  whole numbers
  %lld
  8 bytes
*/


// * Floating-Point Data Types
float floatingPoint;
/*
  decimal numbers
  %f
  4 bytes
  precision: 6 decimal places
*/

double doublePrecision;
/*
  decimal numbers w/ higher precision
  %lf
  8 bytes
  precision: 15 decimal places
*/


// * Character Data Types
char character;
/*
  individual characters
  %c
  1 byte
  can store ASCII values
*/

string str;
/*
  sequence of characters
  no format specifier
*/


// * Minimum & Maximum Values
char charBit = 8; // # of bits in a char
signed char sCharMin = SCHAR_MIN; // min val of signed char (-128)
signed char sCharMax = SCHAR_MAX; // min val of signed char (127)
unsigned char uCharMax = UCHAR_MAX; // max val of unsigned char (255)
char charMin = CHAR_MIN; // min val of char (-128 or 0)
char charMax = CHAR_MAX; // max val of char (127 or 255)
short shortMin = SHRT_MIN; // min val of short (-32,768)
short shortMax = SHRT_MAX; // max val of short (32,767)
unsigned short uShortMax = USHRT_MAX; // max val of unsigned short (65,535)
int intMin = INT_MIN; // min val of int (-2,147,483,648)
int intMax = INT_MAX; // max val of int (2,147,483,647)
unsigned int uIntMax = UINT_MAX; // max val of unsigned int (4,294,967,295)
long longMin = LONG_MIN; // min val of long (-2,147,483,648)
long longMax = LONG_MAX; // max val of long (2,147,483,647) 
unsigned long uLongMax = ULONG_MAX; // max val of unsigned long (4,294,967,295)
long long longLongMin = LLONG_MIN; // min val of long long (-9,223,372,036,854,775,808)
long long longLongMax = LLONG_MAX; // max val of long long (9,223,372,036,854,775,807)
unsigned long long uLongLongMax = ULLONG_MAX; // max val of unsigned long long (18,446,744,073,709,551,615)
// MB_LEN_MAX: max number of bytes in a multibyte character (


// Main function
int main() {

  return 0;
}
