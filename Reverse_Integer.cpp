// Reverse_Integer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{   

	//this code reverses an integer
	long int x;
	cout << "Please input a number not ending in zero \n";
	cin >> x;
	long int rem;
	long int rev = 0;

	while (x != 0)
	{
		rem = x % 10;
		rev = rev * 10 + rem;
		x /= 10;
	}

	cout << "this is the reverse of the number you gave " << rev;
}

