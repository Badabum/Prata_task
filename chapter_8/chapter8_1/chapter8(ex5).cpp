#include "stdafx.h"
#include <iostream>

template <typename T>
T max5(T mass[]);
using namespace std;
void main()
{
	int int_mass[5]={0};
	double double_mass[5]={0};
	cout<<"Enter int massive: "<<endl;
  for(int i=0;i<5;i++)
  {
	  cin>>int_mass[i];
  }
 cout<<"Integer maximum: "<<max5(int_mass)<<endl;
  cout<<"Enter double mass: "<<endl;

    for(int i=0;i<5;i++)
  {
	  cin>>double_mass[i];
  }
	cout<<"Double maximum: "<<max5(double_mass)<<endl;

	cin.get();
	system("pause");
}
template <typename T>
T max5(T mass[])
{
	T maximum=mass[0];
	for(int i=0;i<5;i++)
	{  
		if(mass[i]>maximum)
			maximum=mass[i];
	}
	return(maximum);
}
