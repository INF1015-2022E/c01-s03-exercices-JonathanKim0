///
/// Classe d'employé dans une compagnie.
///


#include <cstddef>
#include <cstdint>

#include <iostream>
#include <string>

#include "Employee.hpp"

using namespace std;

// TODO: Les définitions.

Employee::Employee(){
	cout << "Employee()" << endl;
}

Employee::~Employee() {
	cout << "~Employee()" << endl;
}

double Employee::getSalary() {
//	cout << salary_ << endl;
	return salary_;
}

const string& Employee::getName() {
//	cout << name_ << endl;
	return name_;
}

void setSalary(double salary) {
	salary_ = salary;
}

Employee::Employee(const string& name, double salary) {
	name_ = name;
	salary_ = salary;
	cout << "Employee(const string&, double)" << endl;
}

//Alternative
//Employee::Employee(const string& name, double salary)
//	:name_(name);
//	salary_(salary)
//{
//	cout << "Employee(const string&, double)" << endl;
//}