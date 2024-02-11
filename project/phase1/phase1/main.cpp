#pragma once
#include <iostream>
#include <string>
using namespace std;
class Validation
{
public:
	static bool ValidationName(string name) {
		for (int i = 0; i < name.length(); i++) {
			if (isalpha(name.size() >= 5 ||name.size() <= 20)) {
				for (int i = 0; i < name.length(); i++) {
					if (i == 0) {
						name[i] = toupper(name[i]);
					}
					else if (name[i - 1] == ' ') {
						name[i] = toupper(name[i]);
					}
				}
				return true;
			}
			else if (!isalpha(name.size() > 5 && name.size() > 20)) {
				for (int i = 0; i < 3; i++) {
					cout << "please enter the name without number and with capital letter,like (Maryam Nader)";
				}
				return false;
			}
		}
	}
	static bool ValidationPassword(string password) {
		for (int i = 0; i < password.size(); i++) {
			if (password.size() >= 8 || password.size() <= 20||password[i]==' ') {
				return false;
			}
		}
		return true;
	}
	static bool ValidationSalary(double salary) {
		if (salary < 500) {
			return false;
		}
		return true;
	}
	static bool ValidationBalance(double balance) {
		if (balance < 1500) {
			return false;
		}
		return true;
	}
};

class Person
{
protected:
	int id;
	string name;
	string password;
public:
	void setId(int id) {
		this->id = id;
	}
	void setName(string name) {
		if (Validation::ValidationName) {
			this->name = name;
		}
	}
	void setPassword(string password) {
		if (Validation::ValidationPassword) {
			this->password = password;
		}
	}
	string getName() {
		return name;
	}
	string getPassword() {
		return password;
	}
	int getId() {
		return id;
	}
	Person() {
		id = 1234;
		name = "team";
		password = "243566";
	}
	Person(int id, string name, string password) {
		setId(id);
		setName(name);
		setPassword(password);
	}
	void DisplayFunction() {
		cout << "Your info:" << endl;
		cout << "\tId: " << getId() << endl;
		cout << "\tName: " << getName() << endl;
		cout << "\tPasssword: " << getPassword() << endl;

	}
};

class Employee:public Person
{
protected:
	double salary;
public:
	void setSalary(double salary) {
		if (Validation::ValidationSalary) {
			this->salary = salary;
		}
	}
	double getSalary() {
		return this->salary;
	}
	Employee() {
		salary = 0.0;
	}
	Employee(int id, string name, string password, double salary) :Person(id, name, password) {
		setSalary(salary);
	}
	void DisplayFunction() {
		Person::DisplayFunction();
		cout << "\tSalary: " << getSalary() << endl;
	}
};


class Admin:public Employee
{
public:
	Admin() :Employee() {

	}
	Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {

	}


};

class Client:public Person
{
private:
	double balance;
public:
	void setBalance(double balance) {
		if (Validation::ValidationBalance) {
			this->balance = balance;
		}
	}
	double getBalance() {
		return this->balance;
	}
	void deposit(double amount) {
		this->balance += amount;
	}
	void withdraw(double amount) {
		if ((balance - amount) > 1500) {
			balance -= amount;
		}
		else {
			cout << "no credit enough";
		}
	}
	void transferTo(double amount, Client& recipient) {
		balance -= amount;
		recipient.balance += amount;
	}
	void checkbalance() {
		if (balance >= 1500) {
			cout << "your balance" << balance;
		}
		else {
			cout << "you can't withdraw or transfer money to another account" << balance<<"L.E";
		}
	}
	Client() {
		balance = 0.0;
	}
	Client(int id, string name, string password) :Person(id, name, password) {
		setBalance(balance);
	}
	void DisplayFunctio() {
		Person::DisplayFunction();
		cout << "\tBalnace:" << getBalance() << endl;
	}

};



