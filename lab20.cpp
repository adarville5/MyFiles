/*************************************************************************
 * AURTHOR      : Andre
 * STUDENT ID   : 938387
 * LAB #20       : F,S,J,R
 * CLASS		: CS1A
 * SECTION		: MTWTh: 2pm
 * DUE DATE		: 6/24/2016
 *************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;


int main()
{
	/*********************************************************************
	* CONSTANTS
	* -------------------------------------------------------------------
	* USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	* -------------------------------------------------------------------
	* PROGRAMMER : Andre, Franciso
	* CLASS	 : CS1A
	* SECTION	 : MTWTh: 2pm
	* LAB_NUM	 : 17
	* LAB_NAME   : selection
	*********************************************************************/
	const char PROGRAMMER[30] = "Andre";
	const char CLASS[5]       = "CS1A";
	const char SECTION[25]    = "MTWth: 2:00p - 7:30p";
	const int  LAB_NUM        = 22;
	const char LAB_NAME[17]   ="F,S,J,R";


	// variable declarations go there
	char classcode;
	bool invalid;
	invalid = true;

	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************";
	cout << "\n* PROGRAMMED BY: " << PROGRAMMER;
	cout << "\n*" << setw(14) << "CLASS" << ":" << CLASS;
	cout << "\n*" << setw(14) << "SECTION" << ":" << SECTION;
	cout << "\n*LAB #" << setw(9) << "LABNUM" << ":" << LAB_NAME;
	cout << "\n****************************************************\n\n";
	cout << right;

	// INPUT - describe input here
	do{
		cout<<"Enter Class Code: ";
		cin>>classcode;
		classcode=toupper(classcode);
		switch (classcode)
		{
		case 'F':cout << "\tYou are a Freshman!\n";
		break;

		case 'S': cout << "\tYou are a Softmore!\n";
		break;

		case 'J': cout << "\tYou are a Junior!\n";
		break;

		case 'R': cout << "\tYou are a Senior\n";
		break;
		default : cout << "\tYou entered invalid code\n";
		invalid = false;
		}
	}while (invalid);




	// PROCESSING - describe processing here

	// OUTPUT - describe output here

	return 0;
}
