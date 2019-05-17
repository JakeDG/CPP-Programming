/* Jacob Gidley
Exercise 2-14
This program will determine the salary of an hourly worker, who gets time and a half for hours over 40
*/

#include<iostream>
#include<iomanip>
using namespace std;

double calcPay(double hr, double rt, double ot); // Calculates payment with overtime
double calcPay(double hr, double rt);	// Calculates payment

void main()
{
	double hours, rate, regHours, overtime, salary;
	cout.setf(ios::fixed | ios::showpoint);

	// Get hours and rate input
	cout << "Enter hours worked: ";
	cin >> hours;
	cout << "Enter hourly rate: ";
	cin >> rate;

	// Overtime eligibility
	if (hours > 40)
	{
		overtime = hours - 40;
		regHours = hours - overtime;
		salary = calcPay(regHours, rate, overtime);
		cout << "Your salary is $" << setprecision(2) << salary << endl;
	}
	else
	{
		salary = calcPay(hours, rate);
		cout << "Your salary is $" <<setprecision(2) << salary << endl;
	}

}

// Calculate salary with overtime included
double calcPay(double h, double r, double ovt)
{
	double payment;
	payment = (h * r) + (ovt * (r * 1.5));
	return payment; // Return salary
}

// Calculate regular salary
double calcPay(double h, double r)
{
	double payment;
	payment = (h * r);
	return payment; // Return salary
}
