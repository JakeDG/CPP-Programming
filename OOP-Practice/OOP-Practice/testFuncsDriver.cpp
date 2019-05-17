/*
	Developed by Jacob Gidley

	Driver program for test functions
*/

#include "testFuncs.h"
#include <iostream>

using namespace std;

int main() 
{
	int menuInput = 0; // Stores menu input
	int funcInput1 = 0, funcInput2 = 0; // Stores function input(s)

	// Create input menu
	do
	{
		cout << "What function would you like to use?" << endl;
		cout << "Enter 0 to exit program\n" << "Enter 1 for Multiple function\n" << "Enter 2 for Remainder function\n" 
				<< "Enter 3 for Distance function\n" << "Enter 4 for coin flip simulator" << endl;
		cin >> menuInput;

		switch (menuInput)
		{
			case 0: // Exit program
				cout << "\nGoodbye." << endl;
				exit(0);
				break;

			case 1:	// Multiple function

				// Get input
				cout << "--- Multiple function ---" << endl;
				cout << "Enter 1st number: ";
				cin >> funcInput1;
				cout << "Enter 2nd number: ";
				cin >> funcInput2;

				// Display function result
				if (Funcs::multiple(funcInput1, funcInput2))
					cout << funcInput1 << " is a multiple of " << funcInput2 << endl;
				else
					cout << funcInput1 << " is not a multiple of " << funcInput2 << endl;
				break;
			
			case 2: // Remainder function

				// Get input
				cout << "--- Remainder function ---" << endl;
				cout << "Enter a number: ";
				cin >> funcInput1;

				// Display function result
				

			default:
				exit(0);
				break;
		}

		cout << endl;

	} while (menuInput != 0);

	return 0;
}