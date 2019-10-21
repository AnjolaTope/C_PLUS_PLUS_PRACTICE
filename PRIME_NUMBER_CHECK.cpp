
#include <iostream>
using namespace std;

int main()
{

	int num1, x = 0, z;

	cout << " This is to Check whether a number is prime or not:";
	cout << "Input a number to check prime or not:\n";
	cin >>num1;
	for (z = 1; z <= num1; z++)
	{
		if (num1 % z == 0)
		{
			x++;
		}
	}
	if (x == 2)
	{
		cout << "The entered number is a prime number. \n";
	}
	else {
		cout << "The number you entered is not a prime number. \n";
	}


	cout << "thank you";

	return 0;

}

