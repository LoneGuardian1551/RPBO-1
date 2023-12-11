#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
unsigned short height;
string Salary;
unsigned short ReadPersonAge() {
	unsigned short age;
	cout << "Введите возраст: ";
	cin >> age;
	return age;
}
string ReadPersonName() {
	string name;
	cout << "Введите имя: ";
	cin.ignore();
	getline(cin, name);
	return name;
}
float ReadPersonHeight() {
	float height;
	cout << "Введите рост: ";
	cin >> height;
	return height;
}
void ReadPersonWeight(unsigned short& weight) {
	cout << "Введите вес : ";
	cin >> weight;
}
void ReadPersonSalary(double* salary) {
	cout << "Введите зарплату: ";
	cin >> *salary;
}
void ReadPersonData(unsigned short& age, string& name, double& salary) {
	age = ReadPersonAge();
	name = ReadPersonName();
	ReadPersonSalary(&salary);
}
void ReadPersonData(unsigned short& age, string& name, unsigned short& height, unsigned short& weight) {
	age = ReadPersonAge();
	name = ReadPersonName();
	height = ReadPersonHeight();
	ReadPersonWeight(weight);
}
void WritePersonData(const unsigned short* age, const string& name, const string& height, const string& weight) {
	cout << "Возраст: " << *age << endl;
	cout << "Имя: " << name << endl;
	cout << "Рост: " << height << " cм" << endl;
	cout << "Вес: " << weight << " кг" << endl;
	cout << "Зарплата: " << Salary << endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	unsigned short age = ReadPersonAge();
	string name;
	unsigned short weight;
	double salary;
	ReadPersonName();
	ReadPersonHeight();
	ReadPersonWeight(weight);
	ReadPersonSalary(&salary);
	Salary = to_string(salary);
	ReadPersonData(age, name, salary);
	ReadPersonData(age, name, height, weight);
	WritePersonData(&age, name, to_string(height), to_string(weight));
	return 0;
}
