/* Jacob Gidley
Movie sub-class
This program will define a book that will inherit the properties of
name and price for the media superclass. It will also have an author.
The class will include the overloaded print function from the super class.
The overloaded book print function will print the type of media it is, the name,
price and author.
*/

#include"media.h" // Inherit from media super class
#include<iostream>
#include<String>
using namespace std;

class book : public media
{
private: 
	string author;

// Book constructer
public:
	book(string n, float p, string a) : media(n, p)
	{
		author = a;
	}

	// Overloaded print function
	void print()
	{
		cout << "Book" << endl;
		media::print(); // Call super print
		cout << "Author is " << author << endl;
	}
};