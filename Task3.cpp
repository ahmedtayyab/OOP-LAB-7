
#include <iostream>
#include <string>
using namespace std;

class Author
{
public:
	string firstName;
	string lastName;

public:
	Author(string first, string last)
	{
		firstName = first;
		lastName = last;
	}

	~Author()
	{
		cout << "I am Destructor" << endl;
	}

	void setFirstName(string first)
	{
		firstName = first;
	}

	void setLastName(string last)
	{
		lastName = last;
	}

	string getFirstName()
	{
		return firstName;
	}

	string getLastName()
	{
		return lastName;
	}

	void StringtoString()
	{

		cout << "Author's Name: " << firstName << " " << lastName << endl;
	}
};

int main()
{
	string firstName;
	string lastName;
	cout << "Enter Author's First Name" << endl;
	cin >> firstName;
	cout << "Enter Author's Last Name" << endl;
	cin >> lastName;
    Author a1(firstName, lastName);
    a1.StringtoString();
	system("pause");

	return 0;
}
