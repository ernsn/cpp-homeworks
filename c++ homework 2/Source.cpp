#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

void main() {
	const int SIZE = 5;
	customer cus1,cus2(10, "Emir", "Kaan");
	cus1.printCus();
	cus2.printCus();
	customer cusarr[SIZE];
	for (int i = 0; i < 5; i++) {
		cusarr[i].printCus();
	}
	cusarr[2].setName("Eren");
	cusarr[4].setName("Eko");
	cout << "Changed values" << endl;
	cusarr[2].printCus();
	cusarr[4].printCus();
	system("pause");
}