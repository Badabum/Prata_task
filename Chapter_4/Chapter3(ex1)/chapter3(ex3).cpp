#include "stdafx.h"
#include<cstring>
using namespace std;

int main()
{
	char name[40];
	char surname[40];
	char string[82]="";
	cout<<"Enter your name: ";
	cin.getline(name,40);
	cout<<"Enter your surname: ";
	cin.getline(surname,40);
	strcat(string,name);
	strcat(string,", ");
	strcat(string,surname);
	cout<<"Here is information in a single string: "<<string;
	cin.get();
	return 0;
}