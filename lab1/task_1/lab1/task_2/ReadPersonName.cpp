#include "Header.h"
string ReadPersonName() {
	string name;
	cout << "¬ведите им€: ";
	cin.ignore();
	getline(cin, name);
	return name;
}