/* Jacob Gidley
This program will insert random integers between 0 and 150 into a list and perform some calculations.  
It will prompt the user to ask them the number of elements in the list.  
It will then get that many random numbers between 0 and 150 and put them in the list.
*/

#include<iostream>
#include<iomanip>
#include<map>
#include<list>
#include<iterator>
#include<algorithm>
#include<ctime>

using namespace std;

void main()
{
	int nodeInput, // # of nodes in a list
		randNum, // Stores a random number
		rListNum, // Stores a number from the list
		sum = 0, // Stores the sum of the list
		median, // Stores median of the list
		i, // Counter
		range, // Stores the range of numbers from the list
		rKey = 1; // Key value of a number in the list
	float mean; // Stores the average of the numbers in the list

	list<int> randList;	// Random number list
	list<int>::iterator rListItr, rListItrTwo; // Random number list iterators
	map<int, int> randMap; // Random number map
	map<int, int>::iterator rMapItr; // Random number map iterator

	srand(time(NULL)); // Initialize random seed based on time

	// Get number of nodes
	cout << "Enter amount of numbers: ";
	cin >> nodeInput;

	// Store random numbers into list and map
	for (i = 0; i < nodeInput; i++)
	{
		randNum = rand() % 150;
		randList.push_back(randNum);
	}

	// Store numbers from the list into a map
	for (rListItr = randList.begin(); rListItr != randList.end(); rListItr++)
	{
		randMap[rKey] = *rListItr;
		rKey++;
	}

	// Print map
	cout << setw(9) << "Key" << setw(6) << " " << setw(9) << "Value" << endl;
	for (rMapItr = randMap.begin(); rMapItr != randMap.end(); rMapItr++)
	{
		cout << setw(8) << rMapItr->first << setw(15) << rMapItr->second << endl;
	}

	cout << endl;

	// Sort the list
	randList.sort();

	// Get the mean
	for (rListItr = randList.begin(); rListItr != randList.end(); rListItr++)
	{
		sum += *rListItr;
	}

	mean = sum / randList.size();

	// Get the median
	rListItr = randList.begin();
	for (i = 0; i < (randList.size() / 2); i++)
	{
		rListItr++;
	}

	median = *rListItr;

	// Get the range
	rListItr = min_element(randList.begin(), randList.end());
	rListItrTwo = max_element(randList.begin(), randList.end());
	range = *rListItrTwo - *rListItr;

	// Get random number
	randNum = rand() % randList.size();
	rListItr = randList.begin();
	for (i = 0; i < randNum; i++)
	{
		rListItr++;
	}

	rListNum = *rListItr;

	// Print labels
	cout << "Sum = " << sum << endl;
	cout << "Mean = " << fixed << setprecision(3) << mean << endl;
	cout << "Median = " << median << endl;
	cout << "Range = " << range << endl;
	cout << "Random Number = " << rListNum << endl;
	cout << endl;

	// Put sorted list numbers back into map
	rKey = 1;
	for (rListItr = randList.begin(); rListItr != randList.end(); rListItr++)
	{
		randMap[rKey] = *rListItr;
		rKey++;
	}

	// Print map
	cout << setw(9) << "Key" << setw(6) << " " << setw(9) << "Value" << endl;
	for (rMapItr = randMap.begin(); rMapItr != randMap.end(); rMapItr++)
	{
		cout << setw(8) << rMapItr->first << setw(15) << rMapItr->second << endl;
	}
	//sff
}