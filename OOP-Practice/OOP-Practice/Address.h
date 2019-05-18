/*
	Developed by Jacob Gidley

	This class defines an address
*/

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Address
{
	private:
		string line1, line2, // Address lines
				city,
				state,
				zip;

	public:
		// Constructors and destructor
		Address() : line1("line1"), line2("line2"), city("city"), state("state"), zip("zip") {};
		Address(string line1, string line2, string city, string state, string zip);
		~Address();

		// Getters and setters
		string getLine1() { return this->line1; };
		void setLine1(string line1) { this->line1 = line1; };

		string getLine2() { return this->line2; };
		void setLine2(string line2) { this->line2 = line2; };

		string getCity() { return this->city; };
		void setCity(string city) { this->city = city; };

		string getState() { return this->city; };
		void setState(string state) { this->city = city; };

		string getZip() { return this->zip; };
		void setZip() { this->zip = zip; };

		// toString
		friend ostream& operator<<(ostream& os, const Address addr)
		{
			return (os << "Address: " << addr.line1 << ", " << addr.line2 << " " << addr.city << ", " << addr.state << " " << zip << endl);
		} 
};

/* Member Functions */

// Constructors
Address::Address() {};

Address::Address(string line1, string line2, string city, string state, string zip)
{
	this->line1 = line1;
	this->line2 = line2;
	this->city = city;
	this->state = state;
	this->zip = zip;
}

// Destructor
Address::~Address() {}