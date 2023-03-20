#include <iostream>
#include <string>
using namespace std;
class customer {
private:
	int custId;
	string name;
	string city;
public:
	customer() {
		cout << "Please enter your name: ";
		cin >> this->name;
	}
	customer(int custId, string name, string city) {
		this->custId = custId;
		this->name = name;
		this->city = city;
	};

	int getCustId() const {
		return this->custId;
	}

	string getName() const {
		return this->name;
	}

	string getCity() const {
		return this->city;
	}

	void setCustId(int custId) {
		this->custId = custId;
	}

	void setName(string name) {
		this->name = name;
	}

	void setCity(string city) {
		this->city = city;
	}

	void printCus() {
		cout << "Customer Id is: " << this->custId << endl;
		cout << "Name of customer: " << this->name << endl;
		cout << "Customer city is:" << this->city << endl;
	}
};

