#include <iostream>
using namespace std;
int main()
{

     int arr[5];
     int largest = 0;
     int second_largest = 0;

     for (int i = 0; i < 5; i++)
     {
          cout << "enter the " << i + 1 << "  score : ";
          cin >> arr[i];

          if (arr[i] >= largest)
          {
               second_largest = largest;
               largest = arr[i];
          }
          else if (arr[i] > second_largest && arr[i] != largest)
          {
               second_largest = arr[i];
          }
     }
     cout << "largest is : " << largest << endl;
     cout << "second_largest is : " << second_largest << endl;
     return 0;
}