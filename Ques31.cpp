#include<iostream>
using namespace std;
 int main(){
      
     int arr[5];
     int count =0;
     for (int i=0;i<5;i++){
          cout<<"enter the element : ";
          cin>>arr[i];

          if (arr[i]%3==0 && arr[i]%5==0){
               count ++;

          }
     }
     cout<<"number of element divisible by 3 and 5 both : "<<count<<endl;
       return 0;
 }