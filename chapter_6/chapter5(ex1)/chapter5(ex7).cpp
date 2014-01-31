#include "stdafx.h"
#include <string>
#include<cctype>
#include<cstring>
using namespace std;

void main()
{
	char word[80];
	int num1=0,num2=0,num3=0;
	cout<<"Enter your string: "<<endl;
	do
	{    
		cin.getline(word,80);
		num3++;
		if(isalpha(word[0]))
		{
			word[0]=toupper(word[0]);
			switch (word[0])
			{
			case 'A':
				num1++;
				break;
			case 'O':
				num1++;
				break;
			case 'E':
				num1++;
				break;
			case 'U':
				num1++;
				break;
			case 'Y':
				num1++;
				break;
			case 'I':
				num1++;
				break;
			default:
				num2++;
				break;
			}
		}
		word[0]=tolower(word[0]);
	}while(strcmp(word,"q"));
	cout<<"Number of word that begins with vowels: "<<num1<<endl;
	cout<<"Number of words that begins with consonants: "<<num2-1<<endl;
	cout<<"Others: "<<num3-num1-num2<<endl;
	cin.get(); cin.get();

}