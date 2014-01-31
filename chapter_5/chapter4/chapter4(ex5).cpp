#include "stdafx.h"
#include "functions.h"
#include <string>
using namespace std;
void main()
{
	string month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int amount[12]={0},sum=0;
	for(int i=0;i<12;i++)
	{
		cout<<"Amount in "<<month[i]<<": ";
		amount[i]=checkInput(amount[i]);
        sum+=amount[i];
	}
	cout<<"Total amount: "<<sum<<endl;
	cin.get();
}