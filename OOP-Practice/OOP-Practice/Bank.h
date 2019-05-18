/*
	Developed by Jacob Gidley

	This class defines a bank.
*/

#pragma once
#include <ostream>
#include <string>
#include "Address.h"
#include "CheckingBankAccount.h"

using namespace std;

class Bank
{
	private:
		string name;
		Address address;

	public:
		// Constructor and destructor
		Bank();
		Bank(string name, Address address);
		~Bank();

		// Getters and setters
		string getName() { return this->name; };
		void setName(string name) { this->name = name; };

		Address getAddress() { return this->address; };
		void setAddress(Address address) { this->address = address; };

		// toString
		friend ostream& operator<<(ostream& os, Bank b)
		{
			return (os << "Bank name: " << b.name << endl << "Bank address: " << b.address << endl);
		}

		// Open account
		CheckingBankAccount openAccount(double amt)
		{
			CheckingBankAccount acc(amt);
			return acc;
		}
};


// Constructors
Bank::Bank() {}s
Bank::Bank(string name, Address address)
{
	this->name = name;
	this->address = address;
}

Bank::~Bank() {}


