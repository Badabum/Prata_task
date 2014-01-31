// Chapter8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <conio.h>
using std::cout;
using std::cin;
void show(char*string, int num=0);
int main()
{
	int number(0);
	char str[80];
	do 
	{
	cout<<"Enter your string: ";
	cin.getline(str,80);
	cout<<"Enter your number or press enter to continue: ";
    (cin>>number).get();
	show(str,number);
    cout<<"Continue?:";
	}while(getch()!=27);
	return 0;
}

void show(char*string, int num)
{
	static int count=1;
	if(num>0)
	{
	for(int i=0;i<count;i++)
	{
		cout<<"Your string: "<<std::endl<<string<<std::endl;
	}
	}
	else cout<<"Your string: "<<std::endl<<string<<std::endl;

	count++;
	
}



