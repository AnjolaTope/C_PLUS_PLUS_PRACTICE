#include <iostream>
#include<fstream>
#include<string>
using namespace std;


int morespace(string* &p,int size) {
	
	 int s=0;
	 s=size;

	string* pointer;
	pointer = new string[s];
	for (int i = 0; i < s; i++)
	{
		 pointer[i] = p[i] ;
	}
    delete[]p;

	size += 10;
	p = new string [size];	

	for (int i = 0; i < s; i++)
	{
		p[i] = pointer[i] ;
	}
	
	delete[]pointer;
	return size;
}

int main()
{
	ifstream file;
	string* list;
	int n = 10;
	list = new string[n];
	file.open("list.txt");

	if (file.is_open())
	{
		for (int i = 0; i < n; i++)
		{
			file >> list[i];
			//cout << list[i] << endl;
		}
	}

	while(!file.eof() )
	{
		if (list[n - 1] != "")
		{
			morespace(list, n);
		}
	
		n= morespace(list, n);
		
			for (int i = n-10; i < n; i++)
			{
				file >> list[i];
				cout << list[i] << endl;
				
			}
		
		
	}
	

	delete[]list;

	system("pause");

	return 0;



}

