#include <iostream>
// #include<conio.h>
using namespace std;
int main()
{
     int n = 3;
     float sum = 0;
     for (int i = 0; i < 3; i++)
     {
          cin >> n;
          sum += n;
     }
     float average = sum / 3;
     cout << "average is " << average;
     return 0;
}