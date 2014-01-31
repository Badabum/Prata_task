#include "stdafx.h"
#include <conio.h>

#include <iostream>

double ver(int numbers, int picks);

int main()
{
  using std::cout;
  
  int total, powerball, picks;
  cout << "Enter the total number of choices on the game card,\n"
    "number of choices for a power ball"
    " and the number of picks allowed:\n";
  
  while ((std::cin >> total >> powerball >> picks) && picks <= total)
  {
    cout << "You have one chance in ";
    cout << ver(total, picks) * ver(powerball, 1); // compute the odds
    cout << " of winning.\n";
    cout << "Next three numbers (ESC to quit): ";
	if(getch()==27)
		break;
  }
  cout << "bye\n";
  return 0;
}

double ver(int numbers, int picks)
{
  double result(1.0);
  double n_numbers;
  int n_picks;
  for (n_numbers = numbers, n_picks = picks; n_picks > 0; n_numbers--, n_picks--)
    result = result * n_numbers / n_picks ;
  return result;
}