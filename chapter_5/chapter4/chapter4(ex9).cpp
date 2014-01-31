#include "stdafx.h"
#include "functions.h"
#include<string>
using namespace std;
void main()
{
	string word="";
	string done="done";
	int it=0;
	cout<<"Enter words: "<<endl;
	do
	{
		cin>>word;
		if(word==done)
		{
		break;
		}
		else
		{
			it++;
		cin.clear();
		cin.sync();
		}
	}while(1);
	cout<<"Words: "<<it<<endl;
	cin.get();
}