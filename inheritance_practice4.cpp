#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int roll_number;

    student(string n, int rn)
    {

        name = n;
        roll_number = rn;
        cout << "Name of the student is : " << " " << n << endl;
        cout << "Roll number of the student is : " << " " << rn << endl;
        cout << "Constructor called for Student " << endl;
    }
};
class exam
{
public:
    string subject;
    float marks;

    exam(string sub, float m)
    {
        subject = sub;
        marks = m;
        cout << "subject is : " << " " << sub << endl;
        cout << "marks of the student is : " << " " << m << endl;
        cout << "Constructor called for exam " << endl;
    }
};

class result : public student, public exam
{
public:
    result(string n, int rn, string sub, float m) : student(n, rn), exam(sub, m)
    {
        cout << "Name of the student is : " << " " << n << endl;
        cout << "Roll number of the student is : " << " " << rn << endl;
        cout << "subject is : " << " " << sub << endl;
        cout << "marks of the student is : " << " " << m << endl;
        cout << "Constructor called for result " << endl;
    }
};

int main()
{

    result r1("Mohit", 150, "maths", 98);
    result r2("kunal", 123, "maths", 94);
    return 0;
}