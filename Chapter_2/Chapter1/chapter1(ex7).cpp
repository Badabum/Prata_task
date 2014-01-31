#include "stdafx.h"
#include"functions.h"
using namespace std;
void time(int hours,int minutes)
{
	if((hours>24)||(minutes<0)||(hours<0))
	{
		cout<<"Wrong time!"<<endl;
	}else
	{
		if(minutes>60)
	{
		hours+=minutes/60;
		minutes-=(((minutes)/60)*60);
		cout<<"Time: "<<hours<<":"<<minutes<<endl;
	}
	}
}
void main()
{
	int hours=0,minutes=0;
	cout<<"Enter the number of hours: ";
	hours=checkInput(hours);
	cout<<"Enter the number of minutes: ";
	minutes=checkInput(minutes);
	time(hours,minutes);

	cin.get();
}