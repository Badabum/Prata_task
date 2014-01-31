#include "stdafx.h"
using namespace std;
void main()
{
	float salary;
	float sum=0;
	cout<<"Enter your salary: ";
	cin>>salary;
	while((cin.get()=='\n'))
	{
		if(salary>35000)
		{
			sum=(salary-35000)*0.20+10000*0.1+20000*0.15;
		}
		else if((salary>15000)&&(salary<35000))
		{
			sum=10000*0.1+(salary-15000)*0.15;
		}
		else if(salary>5000)
		{
			sum=(salary-5000)*0.1;
		}
		cout<<"Your sum: "<<sum<<endl;
		cout<<"Enter your salary: ";
		salary=0;
		sum=0;
		cin>>salary;
		
	}
	cout<<"Im here!"<<endl;
	cin.get();
          

}