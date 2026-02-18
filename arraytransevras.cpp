#include <iostream>
using namespace std;

class array
{

public:
     int n , arr[];
     void input()
     {
          cout<<"Enter the no of element in an array : " <<endl;
          cin>>n;
          for (int i=0;i<n;i++){
               cout<<"Enter the " << i+1 << " element value : "<<endl;
               cin>>arr[i];
          }

     }

     int output(){
         for (int i=0;i<n;i++){
               cout<<"your " << i+1 << " element value : "<< arr[i]<<endl;
             
          } 

     }
};

int main()
{
     // object creation
     array s1;


     s1.input();
     s1.output(); 

     return 0;
}