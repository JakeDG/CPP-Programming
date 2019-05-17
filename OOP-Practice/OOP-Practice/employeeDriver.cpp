/*
	Developed by Jacob Gidley
	Driver program for the Employee class
*/

#include<iostream>
#include "employee.h"

int main ()
{
	// Create two employee objects
	Employee e1("Evan", "Nelson", 60000.0);
	Employee e2("Tasha", "Watts", 85000.0);

	// Ouput current salaries
	cout << "Current salaries:\n" << e1 << "\n" << e2 << endl;

	// Adjust salaries by 10%
	e1.adjustSalary(10.0);
	e2.adjustSalary(10.0);

	// Output adjusted salaries
	cout << "10% adjusted salaries:\n" << e1 << "\n" << e2 << endl;

	return 0;
}