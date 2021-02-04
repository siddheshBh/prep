#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int octalNumber);

int main()
{
   int octalNumber;
   cout << "Enter an octal number: ";
   cin >> octalNumber;
   cout << octalNumber << " in octal = " << octalToDecimal(octalNumber) << " in decimal";
   
   return 0;
}
