#ifndef CHECKINPUT_H
#define CHECKINPUT_H
#include <iostream>
template <typename T>
T checkInput(T value)
{
	std::cin>>value;
	while (std::cin.get()!='\n')
	{
		std::cout<<"Wrong data! Please, try again."<<std::endl;
		std::cin.clear();
		std::cin.sync();
		std::cin>>value;
	}
	return(value);
}
#endif