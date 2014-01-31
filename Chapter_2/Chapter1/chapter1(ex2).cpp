#include "stdafx.h"
using namespace std;
float checkInput(float number)
{
	cin>>number;
	while(cin.get()!='\n')
	{
		cout<<"Error.Its must be a number!"<<endl;
		cin.clear();
		cin.sync();
		cin>>number;
	}
	return(number);

}
void main()
{  float distance=0;
	string message1="Hello. Write distance in farlongs :";
	cout<<message1;
	distance=checkInput(distance);
	cout<<"Distance in farlongs= "<<distance<<endl;
	//convert to yards
	distance/=220;

	cout<<"Distance in yards= "<<distance<<endl;
	cin.get();
}
