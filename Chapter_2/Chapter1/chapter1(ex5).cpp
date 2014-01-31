#include "stdafx.h"
#include"functions.h"
float fahrenheit(float celcius)
{
	float fahrenheit=0;
	fahrenheit=1.8*celcius+32;
	return(fahrenheit);
}
using namespace std;
void main()
{
	float degrees=0;
	cout<<"Please enter a Celcius value: ";
	degrees=checkInput(degrees);
	cout<<degrees<<" degrees in Celcius is "<<fahrenheit(degrees)<<" degrees Fahrenheit"<<endl;
	cin.get();
}