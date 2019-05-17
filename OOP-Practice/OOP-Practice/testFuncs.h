/*
	Developed by Jacob Gidley
	This header contains various functions.
*/

#pragma once

using namespace std;

class Funcs
{
	public:

		/*
		* Name: multiple
		* Parameter(s):
		* 0: int - Number to be divded by the second intger
		* 1: int - Number to divide the 1st number by
		*
		* Returns: bool
		*
		* Description:
		* Takes two integers as its arguments and returns true if the
		* first integer is divisible evenly by the second one (i.e., there is no remainder after division);
		* otherwise, the method should return false.
		*/
		static bool multiple(int num1, int num2)
		{
			if (num1 % num2 == 0)
				return true;
			else
				return false;
		}


		int remainder(int num)
		{
			return num % 7;
		}

		double distance(double x1, double y1, double x2, double, y2)
		{
			double distance
		}
};
