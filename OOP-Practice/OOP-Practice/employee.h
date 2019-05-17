/*
	Developed by Jacob Gidley
	This class will define an employee.
*/

#pragma once // Guard
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Employee
{
	private:
		string fname; // First name
		string lname; // Last name
		double salary; // Employee salary

	public:
		// Constructor
		Employee(string fname, string lname, double salary)
		{
			this->fname = fname;
			this->lname = lname;

			if (salary < 0.0)
				this->salary = 0.0;
			else
				this->salary = salary;
		}

		// Destructor
		~Employee() {}

		// Getter/setter for first name
		string getFName() { return this->fname; };
		void setFName(string n) { this->fname = n; };

		// Getter/setter for last name
		string getLName() { return this->lname; };
		void setLName(string n) { this->lname = n; };

		// Getter/setter for salary
		double getSalary() { return this->salary; };
		void setSalary(double s) { this->salary = s; };

		// Adjust salary by percentage
		void adjustSalary(double adjSal)
		{
			this->salary += (this->salary * (adjSal / 100));
		}
		
		// toString using streams
		friend ostream& operator<<(ostream& os, const Employee& e) 
		{
			return (os << "Name: " << e.fname + " " + e.lname << ", Salary: " << fixed << setprecision(2) << e.salary << endl);
		}
};