#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <cctype>
void allToUpper(std::string &str);
using std::cin;
void main()
{
	std::string str="";
	int counter(0);
  do 
  {
	  if(counter==0)
		  std::cout<<"Enter a string: ";
	  else
		  std::cout<<"Next string: ";
		  getline(cin,str);
		  allToUpper(str);
		  std::cout<<str<<std::endl;
		  counter++;

  } while (str!="Q");
  std::cout<<"Bye"<<std::endl;
  cin.get();
}

void allToUpper(std::string &str)
{
	for(int i=0;i<str.length();i++)
	{
		str[i]=toupper(str[i]);
	}
}