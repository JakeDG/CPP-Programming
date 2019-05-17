/* Jacob Gidley
Main media program
This program will prompt the user for the name, price, and type of media
they are looking for. Once the type has been determined, the user will be prompted to enter
a rating or author depending on the type inputted. Then the program will sort the array of
media objects alphabetically by name of the media. At last it will print the sorted collection of
media objects to the screen.
*/

#include<iostream>
#include<String>
#include"movie.h"
#include"book.h"
using namespace std;

void selectSort(media *[], int);

void main()
{
	media *m[3]; // Array of media object pointers
	int i; // Counter
	char mType; // Media type
	string name, // Media name 
		overload; // media author
	float price; // Media price

	// Prompt the user of input
	for (i = 0; i < 3; i++)
	{
		cout << "Enter name: ";
		getline(cin, name, '\n');
		cout << "Enter price: ";
		cin >> price;
		cout << "Is media a book(b) or movie(m): ";
		cin >> mType;
		cin.ignore(1, '\n'); // Clear enter
		tolower(mType);
		
		// Check the type of media inputted
		if (mType == 'b')
		{
			cout << "Enter author: ";
			getline(cin, overload, '\n');
			m[i] = new book(name, price, overload); // Create book media object
		}
		else if (mType == 'm')
		{
			cout << "Enter rating: ";
			getline(cin, overload, '\n');
			m[i] = new movie(name, price, overload); // Create movie media object
		}

		cout << endl;
	}

	selectSort(m, 3); // Call the selection sort

	// Print media objects
	for (i = 0; i < 3; i++)
	{
		m[i]->print(); // Dynamic binding
		cout << endl;
	}
}

// Selection sort function, uses operator from media super class
void selectSort(media *m[], int N)
{
	int pass, j, min;
	media *temp;
	for (pass = 0; pass <= N - 2; pass++)  // passes
	{
		min = pass;
		for (j = pass + 1; j < N; j++)
		{
			if (*m[j] < *m[min]) // in each pass
			{
				min = j;
			}
		}

		// Selection sort
		temp = m[min]; 
		m[min] = m[pass]; 
		m[pass] = temp;
	}
}
