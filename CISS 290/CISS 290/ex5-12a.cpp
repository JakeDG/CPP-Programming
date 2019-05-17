/* Jacob Gidley
Exercise 5-12a
This programwill make a rectangle array 
*/

#include<iostream>
#include"rectangle5-12.h"
#include"cube5-12.h"
#include"colorrectangle5-12.h" 
using namespace std;

void main()
{
	rectangle512 r[3] = { rectangle512(20, 10), rectangle512(10, 5), rectangle512(15, 10) };
	int i;

	r[0] = rectangle512(20, 10);
	r[1] = rectangle512(10, 5);
	r[2] = rectangle512(15, 10);

	for (i = 0; i < 3; i++)
	{
		r[i].print();
		cout << endl;
	}
}