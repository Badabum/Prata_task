#include "stdafx.h"
#include "functions.h"
using namespace std;
void main()
{
	int rows=0,it=0;;
	char*string;
	cout<<"Enter number of rows: ";
	rows=checkInput(rows);
	string=new char[rows];
	for(int k=0;k<rows;k++)
		string[k]='.';
	for(int i=0;i<rows;i++)
	{
		it++;
       for(int j=0;j<it;j++)
	   {
		   string[rows-1-j]='*';
	   }
	   for(int n=0;n<rows;n++)
		   cout<<string[n];
	   cout<<endl;
	}
	cin.get();
}