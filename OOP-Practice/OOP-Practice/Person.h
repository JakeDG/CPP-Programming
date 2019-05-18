/*
	Developed by Jacob Gidley

	This class defines a person
*/

#pragma once
#include <ostream>
#include <string>
#include "Address.h"
#include "CheckingBankAccount.h"

using namespace std;

class Person
{
	private:
		string fName, lName; // First and last name
		Address address; // Person's address
		CheckingBankAccount acc; // Person's checking account

	public:
		// Constructor and destructor
		Person(string fName, string lName, Address address, CheckingBankAccount acc);
		~Person();
		
		// Getters and setters
		string getfName() { return this->fName; };
		void setfName(string fName) { this->fName = fName; };

		string getlName() { return this->lName; };
		void setlName(string fName) { this->lName = lName; };

		Address getAddress() { return this->address; };
		void setAddress(Address address) { this->address = address; };

		CheckingBankAccount getCheckingBackAccount() { return this->acc; };
		void setCheckingBankAccount(CheckingBankAccount acc) { this->acc = acc; };

		// toSting
		friend ostream& operator<<(ostream& os, Person p)
		{
			return (os << "Name: " << p.fName << " " << p.lName << endl << p.address << endl << p.acc << endl);
		}
};

/* Member functions */

// Contructor
Person::Person(string fName, string lName, Address address, CheckingBankAccount acc)
{
	this->fName = fName;
	this->lName = lName;
	this->address = address;
	this->acc = acc;
}

// Destructor
Person::~Person() {}