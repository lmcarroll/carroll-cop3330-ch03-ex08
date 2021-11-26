/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 first_name last_name
 */

#include "std_lib_facilities.h";

int main()
{
	cout << "Enter an integer value: ";

	int input = 0;
	cin >> input;

	if (input % 2)
	{
		cout << "The value " << input << " is an odd number.";
	}
	else {
		cout << "The value " << input << " is an even number.";
	}

	return 0;
}