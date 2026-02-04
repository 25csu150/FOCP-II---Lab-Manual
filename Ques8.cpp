#include <iostream>
// #include<conio.h>
using namespace std;
int main()
{
     int IDs;
     cout << "enter the numeric event IDs from (1 to N ) : ";
     cin >> IDs;
     if (IDs % 3 == 0)
     {
          cout << "BUZZ";
     }
     else if (IDs % 5 == 0)
     {
          cout << "FUZZ";
     }
     else if (IDs % 3 == 0 && IDs % 5 == 0)
     {
          cout << "Both BUZZ and FUZZ";
     }
     else
          cout << "invalid tag ";
     return 0;
}