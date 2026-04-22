// OPERATOR OVERLOADING  redefining the operator
#include <iostream>
using namespace std;

class box
{
public:
     int weight;
     box(int w)                             // constructor
     { 
          weight = w;
     }
     box operator+(box b)                   // overload + operator
     { 
          return box(weight + b.weight);
     }
};

int main()
{
     box b1(10);                            // 10 kg
     box b2(15);                            // 15 kg
     box b3 = b1 + b2;                      // operator is called : b1. operator+(b2)
     cout << "total weight : " << b3.weight << endl;
     return 0;
}
