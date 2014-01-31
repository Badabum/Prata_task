#include "stdafx.h"
#include <iostream>
#include <conio.h>
using std::cout;
using std::cin;

void input(float table[]);
float calculate(float table[]);
void output(float table[]);
void main()
{
	float table[10]={0};
	input(table);
	output(table);
	cout<<"Average: "<<calculate(table)<<std::endl;

	cin.get();

}
void input(float*table)
{

	cout<<"Enter rezults(press ESC to end): ";
	for(int i=0;i<10;i++)
	{
		cout<<"Enter rezult #"<<i<<": ";
		(cin>>table[i]).get();
		if(getch()==27)
			break;
	}
};

float calculate(float table[])
{
	float sum=0;
	for(int i=0;i<10;i++)
	{
		sum+=table[i];
	}
	return(sum/10);
}
void output(float table[])
{
	cout<<"Table: "<<std::endl;
	for(int i=0;i<10;i++)
	{
		cout<<table[i]<<" ";
	}
}