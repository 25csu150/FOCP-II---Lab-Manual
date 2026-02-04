#include<iostream>
// #include<conio.h>
using namespace std;
 int main(){
      int NoOfEmployes;
      float salery;
      float bonus;
      float NetSalery;

      cout<<"enter the No of employes : ";
      cin>>NoOfEmployes;

      for(int i =1 ;i<=NoOfEmployes;i++){
          cout<<"employes number : "<<i;
          cout <<" Enter the salary";
          cin>>salery;
          bonus = salery * 0.12;
          NetSalery=salery + bonus;
          cout<< "Net salary is : "<<NetSalery;
      }
     //  cout<<"enter the No of employes : ";
     //  cin>>NoOfEmployes;
       return 0;
 }