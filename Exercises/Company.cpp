///
/// Une compagnie avec des employés.
///


#include <cstddef>
#include <cstdint>

#include <string>
#include <iostream>

#include <cppitertools/range.hpp>

#include "Employee.hpp"

#include "Company.hpp"

using namespace std;
using namespace iter;


// TODO: Les définitions.

Company::Company(){
	cout << "Company()" << endl;
}

Company::~Company() {
	cout << "~Company()" << endl;
}

Company::Company(const string& name, const string& presidentName, double presidentSalary = 0.0) 
	:name_(name)
	president_(presidentName, presidentSalary){
	cout << "Company(const string, const string&, double)" << endl;
}




void Company::print() const {
	cout << "Name: " << name_ << "\n"
	     << "President: " << president_.getName() << "\n"
	     << "Employees (" << numEmployees_ << "):" << "\n";
	for (int i : range(numEmployees_))
		cout << "  " << employees_[i]->getName() << " (" << employees_[i]->getSalary() << ")" << "\n";
}
