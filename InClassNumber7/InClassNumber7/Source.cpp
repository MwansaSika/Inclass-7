#include <iostream>
#include <string>
using namespace std;

class PersonData
{
private:
	string lstName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;

public:
	PersonData(string ln, string fn, string addr,
		string c, string s, string z)
	{
		lstName = ln;
		firstName = fn;
		address = addr;
		city = c;
		state = s;
		zip = z;
	}

	PersonData()
	{
		lstName = "";
		firstName = "";
		address = "";
		city = "";
		state = "";
		zip = "";
	}

	void setLastName(string ln)
	{
		lstName = ln;
	}
	void setFirstName(string fn)
	{
		firstName = fn;
	}
	void setAddress(string addr)
	{
		address = addr;
	}
	void setCity(string c)
	{
		city = c;
	}
	void setState(string s)
	{
		state = s;
	}
	void setZip(string z)
	{
		zip = z;
	}
	string getLastName() const
	{
		return lstName;
	}
	string getFirstName() const
	{
		return firstName;
	}
	string getAddress() const
	{
		return address;
	}
	string getCity() const
	{
		return city;
	}
	string getState() const
	{
		return state;
	}
	string getZip() const
	{
		return zip;
	}
};

class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;

public:

	CustomerData(string ln, string fn, string addr,
		string c, string s, string z, int cn,
		bool ml) :
		PersonData(ln, fn, addr, c, s, z)
	{
		customerNumber = cn;
		mailingList = ml;
	}

	CustomerData() : PersonData()
	{
		customerNumber = 0;
		mailingList = false;
	}
	void setCustomerNumber(int cn)
	{
		customerNumber = cn;
	}
	void setMailingList(bool ml)
	{
		mailingList = ml;
	}
	int getCustomerNumber()
	{
		return customerNumber;
	}
	bool getMailingList()
	{
		return mailingList;
	}
};

void displayCustomer(CustomerData);

int main()
{
	CustomerData customer1("Musa", "Jere", "E Cameron",
		"West Covina", "CA", "91791", 01,
		false);

	cout << "Customer Number 1 is:\n";
	displayCustomer(customer1);

	CustomerData customer2;
	customer2.setLastName("Sikanyika");
	customer2.setFirstName("Mwansa");
	customer2.setAddress("903 Garnet st");
	customer2.setCity("Redondo Beach");
	customer2.setState("CA");
	customer2.setZip("90277");
	customer2.setCustomerNumber(03);
	customer2.setMailingList(true);

	cout << "Customer number 2 is:\n";
	displayCustomer(customer2);
	cin.get();
	cin.get();
	return 0;
}

void displayCustomer(CustomerData c)
{

	cout << "Last Name: " << c.getLastName() << endl
		<< "First Name: " << c.getFirstName() << endl
		<< "Address: " << c.getAddress() << endl
		<< "City: " << c.getCity() << endl
		<< "State: " << c.getState() << endl
		<< "ZIP: " << c.getZip() << endl
		<< "Customer Number: "
		<< c.getCustomerNumber() << endl
		<< "Mailing List? ";

	if (c.getMailingList())
		cout << "Yes\n\n";
	else
		cout << "No\n\n";
}
