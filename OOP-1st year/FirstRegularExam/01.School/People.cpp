#include "People.h"

People::People()
{

}

People::People(char* name, char* lastName, char* address)
{
	People::name = name;
	People::lastName = lastName;
	People::address = address;
}

ostream& operator<<(ostream& os, const People& people)
{
	os << people.getName() << " " << people.getLastName()
	<< ": " << people.getAddress();

	return os;
}

const char* People::getName() const { return name; }
void People::setName(char* value) { name = value;}

const char* People::getLastName() const { return lastName;}
void People::setLastName(char* value) { lastName = value; }

const char* People::getAddress() const { return address;}
void People::setAddress(char* value) {address = value;}