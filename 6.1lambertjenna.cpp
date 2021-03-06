//Jenna Lambert
//Lab 6.1
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	//declare variables
	int c = 0;

	//arrays
	string employeeId[7] = { "8845", "0125", "5122", "1277", "2850", "0489", "7541" };
	int hours[7] = { 39, 42, 28, 15, 23, 36, 44 };
	double payRate[7] = { 21.5, 25, 18, 18.5, 15.5, 21.5, 30 };
	double grossWages[7] = { 838.5, 1050, 504, 277.5, 356.5, 774, 1320 };

	//formatting
	cout << setprecision(2) << fixed;

	//the table
	cout << "Employee ID\t" << "Hours\t" << "Pay Rate\t" << "Gross Wages\n";
	do {
		cout << employeeId[c] << "\t\t" << hours[c] << "\t" << "$" << payRate[c] << "\t\t" << "$" << grossWages[c] << "\n";
		c++;
	} while (c < 7);
}