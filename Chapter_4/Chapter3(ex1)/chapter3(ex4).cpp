#include "stdafx.h"
#include<cstring>
using namespace std;

int main()
{
   string name;
   string surname;
   cout<<"Enter your name: ";
	getline(cin,name);
	cout<<"Enter your surname: ";
	getline(cin,surname);
	cout<<"Here is information in a single string: "<<(name+", "+surname)<<endl;
	cin.get();
	return 0;

}