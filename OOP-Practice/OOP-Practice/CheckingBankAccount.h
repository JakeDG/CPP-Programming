/*
	Developed by Jacob Gidley

	This class defines a checking bank account.
*/

#pragma once
#include <ostream>
#include <iomanip>

class CheckingBankAccount
{
	private:
		double amt;

	public:
		// Constructor and destructor
		CheckingBankAccount();
		CheckingBankAccount(double amt);
		~CheckingBankAccount();

		// Getters and setters
		double getAmt() { return this->amt; };
		void setAmt() { this->amt = amt; };

		// toString
		friend ostream& operator<<(ostream& os, CheckingBankAccount cba)
		{
			return (os << "Checking account: $" << fixed << setPrecision(2) << cba.amt << endl);
		}

		// Withdraw and deposit functions
		void withdraw(double amt);
		void deposit(double amt);
};

/* Member functions */

// Constructors
CheckingBankAccount::CheckingBankAccount() {}
CheckingBankAccount::CheckingBankAccount(double amt)
{
	this->amt = amt;
}

// Destructor
CheckingBankAccount::~CheckingBankAccount() {}

// Withdraw function
void CheckingBankAccount::withdraw(double amt)
{
	if (amt < this->amt)
	{
		cout << "Withdrawing $" << fixed << setprecision(2) << amt << " from account." << endl;
		this->amt -= amt;
	}
	else
		cout << "ERROR: withdraw amount exceeds account funds!" << endl;
}

// Deposit function
void CheckingBankAccount::deposit(double amt)
{
	cout << "Adding $" << fixed << setprecision(2) << amt << " to account" << endl;
}