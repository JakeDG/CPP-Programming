/*
	Developed by Jacob Gidley
	This class contains various static functions.
*/

#pragma once
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <math.h>  

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

		/*
		* Name: remainder
		* Parameter(s):
		* 0: int - Number to be divded by 7
		*
		* Returns: int
		*
		* Description:
		* Takes an integer as an argument and returns the remainder of that value divided by 7.
		*/
		static int remainder(int num)
		{
			return num % 7;
		}

		/*
		* Name: distance
		* Parameter(s):
		* 0: double - x1 value from first point coords 
		* 1: double - y1 value from first point coords
		* 2: double - x2 value from second point coords
		* 3: double - y2 value from second point coords
		*
		* Returns: double
		*
		* Description:
		* Calculates the distance between two points (x1, y1) and (x2, y2).
		*/
		static double distance(double x1, double y1, double x2, double y2)
		{
			return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Calculate the distance
		}

		/*
		* Name: coinflip
		* Parameter(s):
		* NONE
		*
		* Returns: void
		*
		* Description:
		* Uses random numbers to simulate 10 flips of a coin.
		*/
		static void coinflip()
		{
			// Simulate 10 coin flips
			for (int i = 0; i < 10; i++)
			{
				int num = rand() % 10 + 1; // Generate a number between 1 and 10
				
				// Output heads or tails
				if (num <= 5)
					cout << "Heads" << endl;
				else
					cout << "Tails" << endl;
			}
		}
};