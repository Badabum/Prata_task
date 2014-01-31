#include "stdafx.h"
#include <iostream>

const int Max = 5;

double *fill_array(double *, int);
void show_array(double const *, double const *);
void revalue(double r, double *, double *);
using namespace std;

int main()
{
  
  double properties[Max];
  double *end = fill_array(properties, Max);
  show_array(properties, end);
  if (properties != end)
  {
    cout << "Enter  factor: ";
    double factor;
    while (!(cin >> factor)) // bad input
    {
      cin.clear();
      while (cin.get() != '\n')
      continue;
      cout << "Bad input; Please enter a number: ";
    }
    revalue(factor, properties, end);
    show_array(properties, end);
  }
  cout << "Done.\n";
  cin.get();
  cin.get();
  return 0;
}

double *fill_array(double *ar, int limit)
{
  using namespace std;
  double temp;
  int i;
  for (i = 0; i < limit; i++)
  {
    cout << "Enter value #" << (i + 1) << ": ";
    cin >> temp;
    if (!cin) // bad input
    {
      cin.clear();
      while (cin.get() != '\n')
      continue;
      cout << "Bad input; input process terminated.\n";
      break;
    }
    else if (temp < 0)
    break;
    ar[i] = temp;
  }
  return ar + i;
}

void show_array(double const *begin, double const *end)
{
  using namespace std;
  for (int i = 0; begin != end; ++begin, ++i)
  {
    cout << "Property #" << (i + 1) << ": $";
    cout << *begin << endl;
  }
}

void revalue(double r, double *begin, double *end)
{
  for ( ; begin != end; ++begin)
    *begin *= r;
}