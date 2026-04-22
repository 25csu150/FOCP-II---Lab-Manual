#include<iostream>
using namespace std;

class student {
public :

string name;
int age;
void display(){
     cout << "Name : " << name <<", Age : " << age << endl;
}
};
int main(){
student s[3];                                     // create array of objects
 s[0].name = "Aman" ;                             
 s[0].age = 20;
 s[1].name = "Riya" ;                             
 s[1].age = 21;
 s[2].name = "Karan" ;                             
 s[2].age = 19;                                    // Display values
                
 for(int i=0 ; i<3; i++){
     s[i].display();
}
return 0;
}