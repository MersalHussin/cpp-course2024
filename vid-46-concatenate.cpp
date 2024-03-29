/*
  String
  - Concatenating Strings
  --- Normal Way
  --- strcat => Include string.h
  --- With +
  --- append
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char fname[] = "Osama ";
  char lname[] = "Elzero";

  cout << fname << lname << "\n";
  cout << strcat(fname, lname) << "\n";

  string firstname = "Osama ";
  string lastname = "Elzero";

  cout << firstname + lastname << "\n";
  cout << firstname.append(lastname) << "\n";

  return 0;
}