#include <iostream>
using namespace std;

class candy
{

public:
     string color;
     int points;

     candy(string c, int p)
     {
          cout << "color is : " << " " << c << " and " << "point is :" << " " << p << endl;
          cout << "constructor called for : " << c << endl;
     }

     void setcandy(string c, int p)
     {
          color = c;
          points = p;
     }

     void display(string c, int p)
     {
          cout << "color is : " << c << endl;
          cout << "point is :" << p << endl;
     }
};

int main()
{
     candy c1("red", 50);
     candy c2("pink", 60);

     c2.setcandy("pink", 60);
     c1.display("pink", 60);
     c2.setcandy("red", 60);
     c2.display("red", 50);

     return 0;
}