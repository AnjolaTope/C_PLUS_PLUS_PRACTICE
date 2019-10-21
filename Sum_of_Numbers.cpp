// Anjola_Tope-Babalola_ass1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int main()
{
	int  i,num, sum = 0, nterm, a, sum2 = 0, num1, x = 0, z;



	cout << "Look at this menu\n";
	cout << "1.Sum of first 10 natural numbers\n";
	cout << "2.Sum of n natural numbers\n";
	cout << "3.Exit\n";


	do
	{
		cout << "Please select an option from one to four\n";
		cin >> num;

		if (num == 1)
		{
			for (i = 1; i <= 10; i++)
			{
				sum = sum + i;
			}
			cout << "The sum of the natural numbers is: " << sum << endl;
		}

		else if (num == 2)
		{
			cout << "please input a number of terms\n";
			cin >> nterm;

			for (a = 1; a <= nterm; a++)
			{
				sum2 = sum2 + a;
			}
			cout << "\n The sum of the  numbers is: " << sum2 << endl;
		}
		


	} while (num < 3);

	cout << "thank you";
}




