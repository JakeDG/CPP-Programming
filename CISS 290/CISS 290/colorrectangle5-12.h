/* Jacob Gidley
Exercise 5-12
This program will define a cube
*/

#include"rectangle5-12.h"
#include<iostream>
using namespace std;

class colorrectangle512 : public rectangle512
{
private:
	char color[20];

public:
	colorrectangle512() : rectangle512()
	{
		strcpy_s(color, "blue");
	}

	colorrectangle512(float l, float w, char c[]) : rectangle512(l, w)
	{
		strcpy_s(color, c);
	}

	void print()
	{
		print();
		cout << "Color is " << color << endl;
	}
};
