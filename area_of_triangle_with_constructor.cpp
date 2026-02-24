#include <iostream>
using namespace std;
class triangle
{
public:
     float base, hieght;
     triangle(float b,float h){     //constructor
          base = b;
          hieght = h;
          cout<< "constructo called for "<<  base <<" "<< hieght <<endl;
     }

     float area()
     {
          return 0.5 * base * hieght;
     }
};
int main()
{

     triangle t(12,12);
     
     t.area();
     cout << "area of triangle : " << t.area() << endl;

     return 0;
}