#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
struct Date
{
	int day;
	int month;
	int year;
};

class Employee
{
	string name;
	int idNumber;
	string department;
	string position;
	Date date;
public:
	Employee()
	{
		name = "";
		department = "";
		position = "";
		idNumber = 0;
	}
	~Employee()
	{
		cout << "I am a Destructor" << endl;
	}
	void setName(string n)
	{
		name = n;
	}
	void setIdNumber(int id)
	{
		idNumber = id;
	}
	void setDepartment(string d)
	{
		department = d;
	}
	void setPosition(string p)
	{
		position = p;
	}
	void setDate(Date d)
	{
		date = d;
	}
	string getName()
	{
		return name;
	}
	int getIdNumber()
	{
		return idNumber;
	}
	string getDepartment()
	{
		return department;
	}
	string getPosition()
	{
		return position;
	}
	Date getDate()
	{
		return date;
	}
};
int main()
{
	Employee emp1, emp2, emp3;
	emp1.setName("Adnan Ashraf");
	emp1.setIdNumber(47899);
	emp1.setDepartment("Accounting");
	emp1.setPosition("Vice President");
	Date d1 = { 19, 2, 2000 };
	emp1.setDate(d1);
	emp2.setName("Shahzaib");
	emp2.setIdNumber(39119);
	emp2.setDepartment("IT");
	emp2.setPosition("Programmer");
	Date d2 = { 29, 3, 1999 };
	emp2.setDate(d2);
	emp3.setName("Ziaullah");
	emp3.setIdNumber(81774);
	emp3.setDepartment("Manufacturing");
	emp3.setPosition("Engineer");
	Date d3 = { 20, 2, 2005 };
	emp3.setDate(d3);
	cout << "Name" << setw(22) << "ID Number" << setw(21) << "Department" << setw(18) << "Position" << setw(24) << "Date Hired" << endl;
	cout << emp1.getName() << setw(10) << emp1.getIdNumber() << setw(25) << emp1.getDepartment() << setw(24) << emp1.getPosition() << setw(10) << emp1.getDate().day << "/" << emp1.getDate().month << "/" << emp1.getDate().year << endl;
	cout << emp2.getName() << setw(14) << emp2.getIdNumber() << setw(17) << emp2.getDepartment() << setw(28) << emp2.getPosition() << setw(14) << emp2.getDate().day << "/" << emp2.getDate().month << "/" << emp2.getDate().year << endl;
	cout << emp3.getName() << setw(14) << emp3.getIdNumber() << setw(28) << emp3.getDepartment() << setw(15) << emp3.getPosition() << setw(16) << emp3.getDate().day << "/" << emp3.getDate().month << "/" << emp3.getDate().year << endl;
	system("pause");
}
