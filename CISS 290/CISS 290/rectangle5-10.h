/* Jacob Gidley
Exercise 5-10
This class will define a rectangle
*/
#ifndef rectnagle510_h
#define rectangle510_h
#include<iostream>
using namespace std;

class rectangle510
{
protected:
	float length;
	float width;
	float area;
	float perimeter;

public:
	rectangle510()
	{
		length = 1;
		width = 1;
		area = 1;
		perimeter = 4;
	}

	rectangle510(float l, float w)
	{
		length = l;
		width = w;
		area = length * width;
		perimeter = 2 * (length + width);
	}

	void print()
	{
		cout << "Length is " << length << endl;
		cout << "Width is " << width << endl;
		cout << "Area is " << area << endl;
		cout << "Perimeter is " << perimeter << endl;
	}

	float operator+(rectangle510 r)
	{
		float total;
		total = length + width + r.length + r.width;
		return total;
	}

	float operator-(rectangle510 r)
	{
		float total;
		total = length + width - r.length - r.width;
		return total;
	}

	bool operator>(rectangle510 r)
	{
		if (area > r.area)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<(rectangle510 r)
	{
		if (area < r.area)
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

