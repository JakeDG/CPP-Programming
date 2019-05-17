/* Jacob Gidley
Media Oject Class
This program will define a media object. All types of media will 
inherit the members of this class. The media object will have a name 
and price associated with it. The program will have a virtual print function that will 
print the name and price of the media object. It will also include
an operator function that will sort arrays of media objects alphabetically.
*/

#ifndef media_h // If the media object is not defined then define it
#define	media_h
#include<iostream>
#include<iomanip>
#include<String>
using namespace std;

class media
{
protected:
	string name;
	float price;

public:

	// Media constructor
	media(string n, float p)
	{
		name = n;
		price = p;
	}

	// Virtual print function
	void virtual print()
	{
		cout << "Name is " << name << endl;
		cout << "Price is " << fixed << showpoint << setprecision(2) << price << endl;
	}

	// Operator used for sorting objects by name
	bool operator<(media m)
	{
		if (name < m.name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

#endif
