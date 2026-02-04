#include <iostream>
// #include<conio.h>
using namespace std;
int main()
{
     int year;
     cout << "Enter the year : ";
     cin >> year;
     if (year % 4 == 0)
     {
          cout << "Leap year";
     }
     else if (year % 4 != 0)
     {
          cout << "Not a leap year";
     }

     return 0;
}
