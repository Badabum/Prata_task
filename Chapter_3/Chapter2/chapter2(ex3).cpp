#include"stdafx.h"
#include </Users/KPIshnyk/Documents/Visual Studio 2010/Projects/Chapter1/Chapter1/functions.h>
using namespace std;
void main()
{
	const int minInDeg=60;
	const int secInMin=60;
	float rezult=0,minutes=0,degrees=0,seconds=0;
	cout<<"Enter a latitude in degrees, minutes and seconds"<<endl;
	cout<<"First enter the degrees: ";
	degrees=checkInput(degrees);
	cout<<"Next enter the minutes of arc: ";
	minutes=checkInput(minutes);
	cout<<"Finally, ente the seconds of arc: ";
	seconds=checkInput(seconds);
	rezult=minutes+(seconds/secInMin);//seconds to minutes
	rezult=degrees+(rezult/minInDeg);
	cout<<degrees<<" degrees, "<<minutes<<"minutes, "<<seconds<<"seconds = "<<rezult<<endl;
	cin.get();
}