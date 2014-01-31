#include "stdafx.h"
#include </Users/KPIshnyk/Documents/Visual Studio 2010/Projects/Chapter1/Chapter1/functions.h>
using namespace std;
void main()
{
	const int secInMin=60;
	const int hoursInDay=24;
	const int minInhour=60;
	long long int seconds=0;
	int days=0,hours=0,minutes=0,sec=0;
	cout<<"Enter the number of seconds: ";
	cin>>seconds;
	minutes=seconds/secInMin;
	sec=seconds-minutes*secInMin;
	hours=minutes/minInhour;
	minutes=minutes-hours*minInhour;
	days=hours/hoursInDay;
	hours=hours-days*hoursInDay;
	cout<<seconds<<" seconds = "<<days<< "days, "<<hours<< "hours,"<<minutes<<" minutes, "<<sec<<" seconds"<<endl;
	cin.get();
	cin.get();
	

}