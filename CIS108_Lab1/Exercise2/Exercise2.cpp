// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter your first name:";
	string first_name;
	cin >> first_name;
	cout << "Enter your last name:";
	string last_name;
	cin >> last_name;
	cout << "Enter your age:";
	int age1;
	cin >> age1;
	cout << "enter your confidence in programmers in percentage (0-100):";
	double confidence;
	cin >> confidence;
	int dog_years = age1 * 7;
	cout << "Hello " << first_name <<" " << last_name << " nice to meet you!\n";
	cout << "you might be " << age1 << " in human years, but in dog years you are " << dog_years << "\n";
	if (confidence >= 50) {
		cout << "Writing code is hard work.";
	}
	else {
		cout << "I agree, programmers are not to be trusted.";
	}
}