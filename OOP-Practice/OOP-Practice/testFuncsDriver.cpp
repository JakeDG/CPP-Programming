/*
	Developed by Jacob Gidley

	Driver program for test functions
*/

#include "testFuncs.h"
#include <iostream>
#include <stdio.h>

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

				cout << "Goodbye." << endl;
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
				cout << "Remainder of " << funcInput1 << " divided by 7 is: " << Funcs::remainder(funcInput1) << endl;
				break;

			case 3: // Distance function

				double x1, x2, y1, y2; // Store point coordinates

				cout << "--- Disance function ---" << endl;

				// Get 1st point coordinates
				cout << "Enter first set of coordinates x1: ";
				cin >> x1;
				cout << "Enter first set of coordinates y1: ";
				cin >> y1;

				// Get 2nd point coordinaes
				cout << "Enter first set of coordinates x2: ";
				cin >> x2;
				cout << "Enter first set of coordinates y2: ";
				cin >> y2;

				// Output function result
				printf("Distance between (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, y1, x2, y2, Funcs::distance(x1,y1,x2,y2));
				break;

			case 4: // Coin flip function

				cout << "--- Coin Flip function ---" << endl;
				Funcs::coinflip();
				break;

			default:
				cout << "Invalid input. Please enter a valid option." << endl;
				break;
		}

		cout << endl;

	} while (menuInput != 0);

	return 0;
}