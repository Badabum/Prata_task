#include "stdafx.h"
using namespace std;
void main()
{
	double mass[10],sum=0;
	int it=0,count=0;
	cout<<"Enter numbers: "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>mass[i];
		if(cin.get()!='\n')
		{
			cin.clear();
			cin.sync();
			break;
		}
		else it++;
	}
	for(int i=0;i<it;i++)
	{
		sum+=mass[i];
	}
	sum=sum/it;
	for(int j=0;j<it;j++)
	{
		if(mass[j]>sum)
			count++;
	}
	cout<<"Average value= "<<sum<<endl;
	cout<<"Amount of number that bigger than average: "<<count<<endl;
	cin.get();
}