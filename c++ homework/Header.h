#include <iostream>
#include <string>
using namespace std;

class employee {

private:
	string name, gender;
	double salary;
	int empId;
	static int empCounter;
public:
	
	int totalemp = 0;

	employee() {
		cout << "Please enter your name: " << endl;
		cin >> this->name;
		cout << "Please enter your salary: " << endl;
		cin >> this->salary;
		cout << "Please enter your gender: " << endl;
		cin >> this->gender;
		empCounter++;
		this->empId = empCounter;

	}
	employee(string name, string gender, double salary) {
		this->name = name;
		this->gender = gender;
		this->salary = salary;
		empCounter++;
		this->empId = empCounter;
		
	}
	employee(const employee & oldobj) {
		this->name = oldobj.name;
		this->gender = oldobj.gender;
		this->salary = oldobj.salary;
		empCounter++;
		this->empId = empCounter;
		
	}
	~employee() {
		cout << "Employee with " << this->empId << "has been removed" << endl;
		
	}
	int getEmpid() {
		return this->empId;
	}
	string getName() {
		return this->name;
	}
	double getSalary() {
		return this->salary;
	}
	string getGender() {
		return this->gender;
	}
	int getTotalemp() {
		return this->totalemp;
	}
	void setName(string name) {
		this->name = name;
	}
	void setSalary(double salary) {
		if (salary >= 0 && salary <= 10000)
			this->salary = salary;
		else
			cout << "Invalid Value" << endl;
	}
	void setGender(string gender) {
		if (gender == "M" && gender == "m")
			this->gender = "MALE";
		else if (gender == "F", gender == "f")
			this->gender = "FEMALE";
		else
			cout << "Invalid character" << endl;
	}
};
