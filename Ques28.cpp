#include<iostream>
using namespace std;
 int main(){
     int array[5];
     int evensum = 0;
     int oddsum = 0;
    
     for (int i=0;i<5;i++){
          cout<<"enter the "<< i+1 <<"  marks : ";
          cin>>array[i];
          if(array[i]%2 == 0){
               evensum += array[i];
          }
          else {
               oddsum+= array[i];
          }

     }
    cout<<"Even sum is : "<<evensum<<endl;
    cout<<"Odd sum is : "<<oddsum<<endl; 
    return 0; 
 }

