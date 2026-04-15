#include <iostream>
#include <string>
using namespace std;

class person
{
public:
     string name;
     int age;

     person(string n, int a)
     {
          name = n;
          age = a;

          cout << "name is : " << " " << n << endl;
          cout << "age  is : " << " " << a << endl;
     }
};
class employee : public person
{
public:
     int employee_id;
     string department;

     employee(string n, int a, int employ_id, string departmen) : person(n, a)
     {
          employee_id = employ_id;
          department = departmen;

          cout << "employee ID is : " << " " << employee_id << endl;
          cout << "Department is : " << " " << departmen << endl;
     }
};
class faculty : public employee
{
public:
     string subject;
     string designation;

     faculty(string n, int a, int employ_id, string departmen, string sub, string design) : employee(n, a, employ_id, departmen)
     {

          subject = sub;
          designation = design;

          cout << "subject is : " << " " << sub << endl;
          cout << "Designation is : " << " " << design << endl;
     }
};
int main()
{

     faculty f1("mohit", 18, 123456, "management", "accountancy", "ncu");
     faculty f2("mohit", 18, 123456, "management", "buisness studies ", "ncu");

     employee e1("mohit", 18, 123456, "management");

     person p1("mohit", 18);
     person p2("kunal", 19);
     return 0;
}