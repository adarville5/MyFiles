#include <iostream>
using namesspace std;

//prototypes
// This function accepts two integers and returns the sum of them.
int AddTwoInts (int num1, int num2);

// <ADD PROGRAM DOCUMENTATION HERE>
int main(){

  int n1;   // INPUT      - first of two number used for calculations
  int n1;   // INPUT      - second of two numbers used for calculations
  int sum;  // CALC & OUT - holds the sum of two numbers
 
 /*********************************************************************
	* Intro to Functions
	* PROGRAMMER : Andre, Cashin
	* CLASS	 : CS1A
	* SECTION	 : MTWTh: 2pm
	* LAB_NUM	 : 22
	* LAB_NAME   : Intro to Function
	*********************************************************************/ 
 
  const char PROGRAMMER[30] = "Andre, Cashin";
	const char CLASS[5]       = "CS1A";
	const char SECTION[25]    = "MTWth: 2:00p - 7:30p";
	const int  LAB_NUM        = 22;
	const char LAB_NAME[17]   ="Intro to function";
 
 cout << "Enter the first value: ";
  cin  >>  n1;
  
  cout << "Enter the second: ";
  cin  >> n2;
  
  // process
  sum = AddTwoInts(n1,n2);
  
  
  // Output
   cout << "\nThe Sum is: " << sum << endl;
   
   return 0;
}

// This function accepts two integers and returns the sum of them.
// <This needs more formal documentation>
int AddTwoInts (int num1, int num2)
{
  return num1 + num2;
}
