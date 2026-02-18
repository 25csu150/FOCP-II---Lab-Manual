#include <iostream>
using namespace std;
class triangle
{
public:
     float base, hieght;
     void input(float b, float h)
     {
          // cout << " enter the base and hieght : ";
          // cin >> base >> height;

          base = b;
          hieght = h;
     }

     float area()
     {
          return 0.5 * base * hieght;
     }
};
int main()
{

     triangle t;
     t.input(12, 12);
     cout << "area of triangle : " << t.area() << endl;

     return 0;
}