#include <iostream>
#include<fstream>
#include<string>
using namespace std;

// this is the morespace function that increases the size of the array
int morespace(string* &p,int &size) {
  int s=0;
	 s=size+10;
	 string* pointer;
	 pointer = new string[s];

	for (int i = 0; i < size; i++)
	  {
		 pointer[i] = p[i] ;
	  }
  delete[]p;

	
	p = pointer;	
  return s;
}

int main()
{

	ifstream file;
	string* list;
	int n = 10;
        // this Initializes the original array. This array has ten elements 
	list = new string[n];

        cout <<"The initial  array contains: "<< n <<" elements"<<endl; 
	file.open("List.txt",ios::in);
        //this opens the file and inserts the first ten elements in the file into the array
	if (file.is_open())
	{
		for (int i = 0; i < n; i++)
		{
			file >> list[i];
			cout << list[i] << endl;
		}
	}
       // this dynamically increases the size of the array when there are still elements in the file
       while(!file.eof() )
	 {
		   if (list[n - 1] != "")
		    {
       // this is the morespace function that increases the size of the array
			morespace(list, n);
		    }
       // the morespace function returns the new size of the array 
       // the new size of the array is put into the variable n 
      cout <<"The new array contains: "<< n << " elements"<< endl; 
		  n= morespace(list, n);
   
		// The elemnts in the file are added to the new array
			for (int i = n-10; i < n; i++)
			{
				file >> list[i];
				cout << list[i] << endl;
				
			}
		
		
	}
	

	delete[]list;


	return 0;



}

