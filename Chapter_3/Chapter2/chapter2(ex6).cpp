#include "stdafx.h"
#include </Users/KPIshnyk/Documents/Visual Studio 2010/Projects/Chapter1/Chapter1/functions.h>
using namespace std;

void main()
{
	float gasoline=0,kMeters=0,gas_on100_kMeters=0;
	cout<<"Enter the number of kilometers that you pass: ";
	kMeters=checkInput(kMeters);
	cout<<"Enter the number of gasoline litres: ";
	gasoline=checkInput(gasoline);
	gas_on100_kMeters=(gasoline/kMeters)*100;
	cout<<"Gasoline that needed on 100 kilometers: "<<gas_on100_kMeters;
	cin.get();
}