#include <iostream>
// #include<conio.h>
using namespace std;
int main()
{
     int p1, p2, p3;
     cout << "Enter the score of first player : ";
     cin >> p1;
     cout << "Enter the score of second player : ";
     cin >> p2;
     cout << "Enter the score of third player : ";
     cin >> p3;

     if (p1 > p2 && p1 > p3)
     {
          cout << "first player is winner";
     }
     else if (p2 > p1 && p2 > p3)
     {
          cout << "second player is winner";
     }
     else
     {
          cout << "third player is winner";
     }

     return 0;
}