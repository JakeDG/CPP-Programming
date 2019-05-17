/* Jacob Gidley
Movie sub-class
This program will define a movie that will inherit the properties of 
name and price for the media superclass. It will also have a rating.
The class will include the overloaded print function from the super class.
The overloaded movie print function will print the type of media it is, the name, 
price and rating.
*/

#include"media.h" // Inherit from media super class
#include<iostream>
#include<String>
using namespace std;

class movie : public media
{
private: 
	string rating;

// Movie constructer
public:
	movie(string n, float p, string r) : media(n, p)
	{
		rating = r;
	}

	// Overloaded print function
	void print()
	{
		cout << "Movie" << endl;
		media::print();	// Call super print
		cout << "Rating is " << rating << endl;
	}
};