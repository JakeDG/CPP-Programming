/*Jacob Gidley
Palindrome Assignment
This program will have the user input a c-string of 
characters and use c-string functions to determine 
if the inputted c-string is a palindrome or not.
*/

// No warning errors
#ifdef _MSC_VER
#define	_CRT_SECURE_NO_WARNINGS
#endif

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void checkPal(char[]);
bool isPalindrome(char[]);

void main()
{
	char input[50];
	cout << "Enter a line of text: ";
	cin.getline(input, sizeof(input), '\n'); // Get user input
	checkPal(input);

	// Print if the input is a palindrome or not
	if (isPalindrome(input))
	{
		cout << input << " is a palindrome" << endl;
	}
	else
	{
		cout << input << " is not a palindrome" << endl;
	}
}

/* Split the user input into tokens,
combine the tokens together, and make all the letters
lowercase. 
*/
void checkPal(char cstr[])
{
	int i;
	char *tokenptr, copy[50] = "";
	tokenptr = strtok(cstr, " ,.!?:;");

	while (tokenptr != NULL)
	{
		strcat(copy, tokenptr); // Concatenate the strings onto one another
		tokenptr = strtok(NULL, " ,.!?:;");
	}

	for (i = 0; i < strlen(copy); i++)
	{
		copy[i] = (char)tolower(copy[i]); // Make letters lowercase 
	}
	
	strcpy(cstr, copy); // Copy the new string into the old one
}

// Check to see if the input is a palindrome or not
bool isPalindrome(char cstrc[])
{
	int i, j = 0;
	bool isPal;
	char reverse[50] = ""; // Used to store reverse input and compare

	// Get the reverse of the input
	for (i = strlen(cstrc) - 1; i >= 0; i--)
	{
		reverse[j] = cstrc[i];
		j++;
	}

	if (strcmp(cstrc, reverse) == 0) // Compare the input to the reverse
	{
		isPal = true;
	}
	else
	{
		isPal = false;
	}

	return isPal;
}
