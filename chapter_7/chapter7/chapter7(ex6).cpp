#include "stdafx.h"
#include <iostream>
#include "functions.h"

using std::cout;
using std::cin;
int Fill_array(double mass[],int size)
{
	int counter=0;
	for(int i=0;i<size;i++)
	{
		counter++;
	cout<<"Enter element #"<<i<<": ";
	cin>>mass[i];
	if(cin.get()!='\n')
	{
		cin.clear();
		cin.sync();
		break;
	}
	}
	return(counter);
}

void Show_array(double mass[],int size)
{
	cout<<"This is your massive: ";
	for(int i=0;i<size;i++)
	{
		cout<<mass[i]<<" ";
	}
}

void Reverse_array(double mass[],int size)
{
	double swap=0;
	int i=size-1;
	int j=0;
	do
	{
		double swap(0);
        swap=mass[j];
		mass[j]=mass[i];
		mass[i]=swap;
		i--;
		j++;
	}while(j<i);

}

void main()
{
	int numbOf=0;
	const int size(13);
	double mass[size]={0};
	cout<<"Hello"<<std::endl;
 
	numbOf=Fill_array(mass,size);
    Show_array(mass,size);
    Reverse_array(mass+1,size-2);
	cout<<"Look!\n";
		Show_array(mass,size);
		cin.get();
}