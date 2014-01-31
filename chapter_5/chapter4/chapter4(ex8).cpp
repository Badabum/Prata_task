#include "stdafx.h"
#include "functions.h"
#include<string>
#include <cstring>
using namespace std;
void main()
{
	char word[20];
	char done[]="done";
	int it=0;
	cout<<"Enter words. (enter \"done\" to end) : ";
	do
	{
		cin.getline(word,20);
		if(strcmp(done,word)==0)
		{
			break;
		}else
			it++;
	}while(1);
	cout<<"Number of words: "<<it<<endl;
	cin.get();
}