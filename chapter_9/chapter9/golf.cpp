#include "stdafx.h"
#include "golf.h"
#include <iostream>
#include "checkInput.h"
void setgolf(golf & g,const char * name,int hc)
{
	strcpy(g.fullname,name);
	handicap(g,hc);
}

int setgolf(golf & g)
{
	std::cout<<"Enter player name: ";
	std::cin.getline(g.fullname,Len+1);
	if(strlen(g.fullname)==0)
		return 0;

	std::cout<<"Enter player handicape: ";
	g.handicap=checkInput(g.handicap);
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap=hc;
}

void showgolf(const golf & g)
{
	std::cout<<"Name: "<<g.fullname<<std::endl;
	std::cout<<"Handicape: "<<g.handicap<<std::endl;
}