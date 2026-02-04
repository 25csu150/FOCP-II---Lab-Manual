#include<iostream>
using namespace std;
 int main(){
     int array[5];
     float total = 0;
     float percentage;
     for (int i=0;i<5;i++){
          cout<<"enter the "<< i+1 <<"  marks : ";
          cin>>array[i];
          total+=array[i];

     }
     percentage = total/5.0;
     cout<<"total is : "<<total<<endl;

     cout<<"percentage is : "<<percentage<<endl;

 }
 