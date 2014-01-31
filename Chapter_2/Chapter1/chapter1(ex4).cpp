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
{   
	float age=0;
	cout<<"Hello.How old are you?"<<endl;
	age=checkInput(age);
	age*=12;
	cout<<"Your age in month= "<<age<<endl;
	cin.get();
}