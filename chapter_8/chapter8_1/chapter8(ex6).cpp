#include "stdafx.h"
#include <iostream>
#include<cstring>
template <typename T>       //шаблон
T maxn(T mass[],int size);

template<>char* maxn<char*>(char*mass[],int size);  //явная специализация для массива строк
using namespace std;
void main()
{
	int int_mass[4]={0};
	double double_mass[6]={0};
	char *char_mass[5];
	cout<<"Enter int massive: "<<endl;
	for(int i=0;i<5;i++)
		char_mass[i]=new char[80];
  for(int i=0;i<4;i++)
  {
	  cin>>int_mass[i];
  }
 cout<<"Integer maximum: "<<maxn(int_mass,4)<<endl;
  cout<<"Enter double mass: "<<endl;

    for(int i=0;i<6;i++)
  {
	  cin>>double_mass[i];
  }
	cout<<"Double maximum: "<<maxn(double_mass,6)<<endl;

	cout<<"Enter strings: "<<endl;
	for(int i=0;i<5;i++)
	{
        cin.getline(char_mass[i],80);
	}
	cout<<"Max char: "<<(void*)maxn(char_mass,5)<<endl;  //приводим к типу воид звездочка,иначе выведет не адрес а строку
	cin.get();
	system("pause");
 
}

template <typename T>
T maxn(T mass[],int size)
{
    T maximum=mass[0];
	for(int i=0;i<size;i++)
	{  
		if(mass[i]>maximum)
			maximum=mass[i];
	}
	return(maximum);
}

template<> 
char* maxn<char*>(char*mass[],int size)
{
	char*maximum=mass[0];
   for(int i=0;i<size;i++)
   {
	  if(strlen(mass[i])>strlen(maximum))
		  maximum=mass[i];
   }
   return (maximum);
}