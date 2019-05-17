/*Jacob Gidley
Exercise 3-10a
This program will take input from the user and
print only the words that end in "es" or begin in "yan"
*/

#include<iostream>
using namespace std;

void main()
{
	char csa[3][50];
	int i, length;

	// Get input
	for (i = 0; i < 3; i++)
	{
		cout << "Enter a word: ";
		cin.getline(csa[i], sizeof(csa[i]), '\n');
	}

	// Check if the word begins with "yan"
	cout << "\nWords that start with yan:" << endl;
	for (i = 0; i < 3; i++)
	{
		if (strncmp(csa[i], "yan", 3) == 0)
		{
			cout << csa[i] << endl;
		}
	}

	// Check if the word ends in "es"
	cout << "\nWords that end with es:" << endl;
	for (i = 0; i < 3; i++)
	{
		length = strlen(csa[i]);
		if ((csa[i][length - 2] == 'e') && (csa[i][length - 1] == 's'))
		{
			cout << csa[i] << endl;
		}
	}
	cout << '\n';
}