#include "stdafx.h"
#include"functions.h"
float astrounits(float lightYears)
{
	float astrounits=0;
	astrounits=lightYears*63240;
	return(astrounits);
}
using namespace std;
void main()
{
	float years=0;
	cout<<"Enter the number of light years: ";
	years=checkInput(years);
	cout<<years<<" light years = "<<astrounits(years)<<" astronomical units "<<endl;
	cin.get();
}