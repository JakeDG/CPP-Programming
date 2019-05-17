/* 
* Jacob Gidley, CISS 290
* C++ Function Assignment
* This program will allow the user to make 1 of 4 choices. 
* They can input a 1 for finding Cosines, 2 for finding Logarithms, 
* 3 for converting between Decimal and Hexadecimal, or 4 to Exit the program.
* All of the choices will use different C++ functions to calculate or convert the users input.
*/

#include<iostream>
#include<iomanip>

using namespace std;

void main()
{
	int choice1, // User choice of what primary function to make use of
		choice2, // User choice of what type of secondary function they would like to use
		conNum; // Stores number user would like to convert
	float fltNum, // Stores user's input number
		outNum; // Stores a function's return value
	bool casePrint, // Bool to store in upper or lowercase for hex output
		reRun; // Bool to store if the users wishes to re-run the program

	// Turn on display of base, generate a decimal-point for floats, and generate a prefix indicating the numeric base for integers
	cout.setf(ios::showbase | ios::fixed | ios::showpoint);  

	do
	{
		// User chooses what they would like to do with the program
		cout << "Type 1 to find cosines\nType 2 to find logarithms\nType 3 to convert between decimal and hexadecimal\nType 4 to exit" << endl;
		cin >> choice1;

		// User chooses what type of cosine to find
		if (choice1 == 1)
		{
			// Get input
			cout << "What type of cosine would you like to find?" << endl;
			cout << "Enter 1 to find cosine\nEnter 2 to find arc cosine\nEnter 3 to find hyperbolic cosine" << endl;
			cin >> choice2;

			// Find cosine
			if (choice2 == 1)
			{
				// Get input
				cout << "Enter a number: " << endl;
				cin >> fltNum;

				outNum = cos(fltNum); // Find cosine
				cout << "The cosine of " << setprecision(3) << fltNum << " is " << outNum << endl; // Output result
			}

			// Find arc cosine
			else if (choice2 == 2)
			{
				// Get input
				cout << "Enter a number: " << endl;
				cin >> fltNum;

				outNum = acos(fltNum); // Find arcosine
				cout << "The arc cosine of " << setprecision(3) << fltNum << " is " << outNum << endl; // Output result
			}

			// Find hyperbolic cosine
			else
			{
				// Get input
				cout << "Enter a number: " << endl;
				cin >> fltNum;

				outNum = cosh(fltNum); // Find hyperbolic cosine
				cout << "The hyperbolic cosine of " << setprecision(3) << fltNum << " is " << outNum << endl; // Output result
			}

		}

		// User chooses what type of logarithm to find
		if (choice1 == 2)
		{
			// Get input
			cout << "Enter 1 to find the common logarithms\nEnter 2 to find the natural logarithm" << endl;
			cin >> choice2;

			// Find common logarithm
			if (choice2 == 1)
			{
				// Get input
				cout << "Enter a number: ";
				cin >> fltNum;

				outNum = log10(fltNum); // Get log base 10
				cout << "The common log of " << setprecision(3) << fltNum << " is " << showpos << outNum << endl; // Output result to 3 decimal places
			}

			// Find natural logarithm
			if (choice2 == 2)
			{
				// Get input
				cout << "Enter a number: ";
				cin >> fltNum;

				outNum = log(fltNum); // Get natural log
				cout << "The natural log of " << setprecision(3) << fltNum << " is " << showpos << outNum << endl; // Output result to 3 decimal places
			}

		}

		// User chooses what type of conversion they would like to make
		if (choice1 == 3)
		{
			// Get user choice
			cout << "Enter 1 to convert decimal to hexadecimal\nEnter 2 to convert hexadecimal to decimal" << endl;
			cin >> choice2;

			// User chooses whether they'd like uppercase or lowercase letters when the hex number is printed
			if (choice2 == 1)
			{
				// Get input
				cout << "Would you like to use lowercase letters in the printing of the hexadecimal number?\nEnter true or false" << endl;
				cin >> boolalpha >> casePrint; // Convert true and false to 1 or 0

				// Get input
				cout << "Enter a decimal number to convert: ";
				cin >> conNum;

				// Print in lowercase
				if (casePrint == 1)
				{
					cout << "The number in hexadecimal is: " << hex << noshowpos << conNum << endl;
				}

				// Print in  uppercase
				else
				{
					cout << "The number in hexadecimal is: " << hex << noshowpos << uppercase << conNum << endl;
				}
			}

			// Convert hex to decimal
			if (choice2 == 2)
			{
				// Get input
				cout << "Enter a hexidecimal number to convert: ";
				cin >> hex >> conNum;

				cout << "The number in decimal is: " << dec << noshowpos << conNum << endl; // Output result
			}

		}

		// Exit the program
		if (choice1 == 4)
		{
			exit(0);
		}

		// Ask if the user wishes to re run the program
		cout << "Re-run the program? Enter true or false" << endl;
		cin >> boolalpha >> reRun;
		
	} while (reRun == 1); // If true re-run the program

}