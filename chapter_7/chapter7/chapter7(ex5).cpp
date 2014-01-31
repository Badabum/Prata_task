#include "stdafx.h"
#include <iostream>
#include "functions.h"
long int factorials(unsigned numb);

void main()
{

	using std::cout;
	using std::cin;
	int number(0);
	cout<<"Enter number: ";
	number=checkInput(number);
	cout<<"Factorial: "<<factorials(number)<<std::endl;
	cin.get();

}
long int factorials(unsigned numb)
{
  if(numb==0)
	  return (1);
  else
	  return numb*factorials(numb-1);
}