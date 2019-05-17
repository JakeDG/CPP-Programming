/* Jacob Gidley, CISS 290
Hare and Tortoise Race Assignment
This program will ahve a hare and tortoise race across the screen.
The hare and tortoise movement will be determined by a random number 
generator, which will decide the value of how much the participants will move.
The hare's position is represented by a "H" and the tortoise's with a "T".
A "Bump" means that they both held the same movement value.
Once either opponent reachs a value of 70 the race ends and the program 
prints who won or if it was a tie.
*/

#include<iostream>;
#include<cstdlib>;
#include<ctime>;
using namespace std;

void move(int num1, int num2, int &num3, int &num4);
void print(int *num1, int *num2);

void main()
{
	int hareVal = 1, tortVal = 1, hareRand, tortRand;
	
	// Initialize random seed based on time
	srand (time(NULL));

	cout << "ON YOUR MARK, GET SET\nBANG!!!!\nAND THEIR OFF!!!!" << endl;

	// Keep generating numbers until the hare or tortoise value reach 70
	while ((hareVal != 70) && (tortVal != 70))
	{
		// Generate random numbers for hare and tortoise and send them to the move function
		hareRand = rand() % 10 + 1;
		tortRand = rand() % 10 + 1;

		move(hareRand, tortRand, hareVal, tortVal);
		print(&hareVal, &tortVal);
	}

	// Print who won
	if (hareVal == 70)
	{
		cout << "The Hare Won!" << endl;
	}
	else if (tortVal == 70)
	{
		cout << "The Tortoise Won!" << endl;
	}
	else
	{
		cout << "The race was a tie" << endl;
	}

} 

// Move Hare and Tortoise positions
void move(int hareRand, int tortRand, int &hareVal, int &tortVal)
{
	switch (hareRand)
	{
	case 1:case 2:
		// Do nothing
		break;
	case 3:case 4:
		hareVal += 9;
		break;
	case 5:
		hareVal -= 12;
		break;
	case 6:case 7:case 8:
		hareVal += 1;
		break;
	case 9:case 10:
		hareVal -= 2;
		break;
	}

	// Check if hare value is between 1 and 70
	if (hareVal > 70)
	{
		hareVal = 70;
	}
	else if (hareVal < 1)
	{
		hareVal = 1;
	}

	switch (tortRand)
	{
	case 1:case 2:case 3:case 4:case 5:
		tortVal += 3;
		break;
	case 6:case 7:
		tortVal -= 6;
		break;
	case 8:case 9:case 10:
		tortVal += 1;
		break;
	}

	// Check if tortoise value is between 1 and 70
	if (tortVal > 70)
	{
		tortVal = 70;
	}
	else if (tortVal < 1)
	{
		tortVal = 1;
	}

}

// Print Hare and Tortoise positions during race
void print(int *hareVal, int *tortVal)
{
	int i;
	for (i = 1; i <= 70; i++)
	{
		if ((*hareVal == i) && (*tortVal == i)) // Both values are the same
		{
			cout << "Bump";
		}
		else if (*hareVal == i)
		{
			cout << "H";
		}
		else if (*tortVal == i)
		{
			cout << "T";
		}
		else
		{
			cout << " ";
		}
	}

	cout << endl;
}