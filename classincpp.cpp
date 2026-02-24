#include <iostream>
using namespace std;

class student
{
private:
     int marks; // private : only accessible inside this class
protected:
     int rollnumber; // protected : accessible inside class (and derived class)
public:
     string name; // public : accessible everywhere
                  // setter for private and protected data

     void setdata(int m, int r)
     {

          marks = m;
          rollnumber = r;

     } // getter for provide data
     //  incapsulation is binding data and func in class and controlling its access with help of access specifier
     int getmarks()
     {
          return marks;
     }
     // function to show protected data
     void showrollnumber()
     {
          cout << "roll number : " << rollnumber << endl;
     }
};

int main()
{
     // object creation
     student s1;
     // Accessing public member
     s1.name = "Alice";
     // setti ng private & protected values
     s1.setdata(98, 101);
     cout << " Name : " << s1.name << endl;
     cout << "Marks : " << s1.getmarks() << endl;
     // setting protected data using public function
     s1.showrollnumber();

     //  These would cause ERROR if uncommented :
     //    s1.marks = 90;
     // s1. rollnumber = 101;

     return 0;
}