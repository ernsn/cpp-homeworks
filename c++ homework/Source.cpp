#include<iostream>
#include"Header.h"
#include<string>
using namespace std;

void main()
{
	{
		const int SIZE = 10;
		const int SIZE2 = 3;
		int i = 0;
		employee emp1, emp2("Smith",3480.75,"M");
		employee emparr1[SIZE] = {employee("Eren Þen",4800,"M") };
		employee emparr2[SIZE2] = {employee("Kadir Mert",5000,"M"),employee("Ela Nur",3800,"F") };
		emp2.setSalary(14500.50);
		cout << endl << "emp2's salary is:" << emp2.getSalary();
		employee emp3(emp2);
		
		cout << "Employee id is:" << emp3.getEmpid() << endl;
		cout << "Employee name:" << emp3.getName() << endl;
		cout << "Employee gender:" << emp3.getGender() << endl;
		cout << "Employee salary:" << emp3.getSalary() << endl;
		
		for (i = 0; i < 3; i++)
		{
			cout << "Employee id is:" << emparr1[i].getEmpid() << endl;
			cout << "Employee name:" <<emparr1[i].getName() << endl;
			cout <<  "Employee gender:" << emparr1[i].getGender() << endl;
			cout <<  "Employee salary:" << emparr1[i].getSalary() << endl;
		}
		for (i = 0; i < 2; i++)
		{
			cout <<  "Employee id is:" << emparr2[i].getEmpid() << endl;
			cout <<  "Employee name:" << emparr2[i].getName() << endl;
			cout <<  "Employee gender:" << emparr2[i].getGender() << endl;
			cout <<  "Employee salary:" << emparr2[i].getSalary() << endl;
		}
		cout << "Number of emplooyees:" << employee::getTotalEmp() << endl;
		
	} system("pause");
}