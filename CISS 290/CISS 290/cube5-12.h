/* Jacob Gidley
Exercise 5-12
This program will define a cube
*/

#include"rectangle5-12.h"
#include<iostream>
using namespace std;

class cube512 : public rectangle512
{
private:
	float depth;

public:
	cube512() : rectangle512()
	{
		depth = 1;
		area = 2 * length * width + 2 * length * depth + 2 * width * depth;
		perimeter = 2 * (length + width) + 2 * (length * depth) + 2 * (width * depth);
	}

	cube512(float l, float w, float d) : rectangle512(l, w)
	{
		depth = d;
		area = 2 * length * width + 2 * length * depth + 2 * width * depth;
		perimeter = 2 * (length + width) + 2 * (length * depth) + 2 * (width * depth);
	}

	void print()
	{
		print();
		cout << "Depth is " << depth << endl;
	}
};
