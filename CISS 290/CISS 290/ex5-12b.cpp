/* Jacob Gidley
Exercise 5-12b
This programwill make a rectangle array 
*/

#include<iostream>
#include"rectangle5-12.h"
#include"cube5-12.h"
#include"colorrectangle5-12.h" 
using namespace std;

void main()
{
	rectangle512 *r[3] = { new rectangle512(20, 10), new cube512(10, 5, 3), new colorrectangle512(15, 10, "Blue") };
	int i;

	r[0] = new rectangle512(20, 10);
	r[1] = new cube512(10, 5, 3);
	r[2] = new colorrectangle512(15, 10, "Blue");

	for (i = 0; i < 3; i++)
	{
		cout << "Address of object is " << r[i] << endl;
		cout << "Address of object is " << *(r + i) << endl;
		cout << "Address of object pointer is " << &r[i] << endl;
		cout << "Address of object pointer is " << r + i << endl;
		(*r[i]).print(); // dynamic binding
		cout << endl;
		r[i]->print();	// dynamic binding
		cout << endl;
	}
}