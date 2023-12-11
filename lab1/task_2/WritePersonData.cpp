#include "Header.h"
void WritePersonData(const unsigned short* age, const string& name, const string& height, const string& weight) {
	cout << "Возраст: " << *age << endl;
	cout << "Имя: " << name << endl;
	cout << "Рост: " << height << " cм" << endl;
	cout << "Вес: " << weight << " кг" << endl;
	cout << "Зарплата: " << Salary << endl;
}