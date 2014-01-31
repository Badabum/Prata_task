#include "stdafx.h"
#include <iostream>
#include <cstring>

struct stringy  
{
	char*str;
	int ct;
};

void set(stringy& str,char* const init_str);
void show(const stringy&str,int count=1);
void show(char str[],int count=1);

void main()
{
  stringy beany;
  char testing[]="Reality isn't what it used to be.";
  set(beany,testing);

  //show(beany);
  show(beany,2);

  testing[0]='D';
  testing[1]='u';

  //show(testing);
  show(testing,3);
  show("Done!");
  std::cin.get();
}

void set(stringy& str,char*init_str)
{
	
  str.ct=strlen(init_str);
  str.str=new char[str.ct+1];
  strcpy(str.str,init_str);
}

void show(const stringy&str,int count)
{
	std::cout<<"Show beany\n";
    for(int i=0;i<count;i++)
	{
		std::cout<<str.str<<std::endl;
	}
}
void show(char str[],int count)
{

	std::cout<<"Show: "<<std::endl;
	for (int i=0;i<count;i++)
	{
		std::cout<<str<<std::endl;
	}
   
}