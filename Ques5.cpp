#include<iostream>
// #include<conio.h>
using namespace std;
 int main(){
      int a,b,c;
      cout<<"enter the value of a : ";
      cin>>a;
      cout<<"enter the value of b : ";
      cin>>b;


      cout<< "before swaping a is"<<a<<"and b is "<<b<< endl;
     
      c=a;
      a=b;
      b=c;

      cout<< "after swaping a is"<<a<<"and b is "<<b<< endl;
     
       return 0;
 }