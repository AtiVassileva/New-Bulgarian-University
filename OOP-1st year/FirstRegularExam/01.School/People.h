#pragma once
#include <ostream>

using namespace std;

class People
{
protected:
	const char* name;
	const char* lastName;
	const char* address;

public:
	People();

	People(char* name, char* lastName, char* address);

	friend ostream& operator<<(ostream&, const People&);

	const char* getName() const;
	void setName(char* value);

	const char* getLastName() const;
	void setLastName(char* value);

	const char* getAddress() const;
	void setAddress(char* value);
};
