#include <iostream>
using namespace std;
int main()
{
     int side1, side2, side3;
     cout << "Enter the length of the three sides of the triangle: " << endl;
     cin >> side1 >> side2 >> side3;

     if (side1 == side2 && side2 == side3)
     {
          cout << "Equilateral Triangle" << endl; // All sides equal
     }
     else if (side1 == side2 || side1 == side3 || side2 == side3)
     {
          cout << "Isosceles Triangle" << endl; // At least two sides equal
     }
     else
     {
          cout << "Scalene Triangle" << endl; // All sides different
     }

     return 0;
}