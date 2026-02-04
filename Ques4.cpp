#include<iostream>
// #include<conio.h>
using namespace std;
 int main(){
     int itemnumber,quantity,unitprice;
          cout<<"enter the item no. :";
          cin>>itemnumber;
          cout<<"enter the quantity :";
          cin>>quantity;
          cout<<"enter the unit price :";
          cin>>unitprice;
          
     
          int amount= quantity*unitprice;
          float discount = 0.20 * amount ;
          float finalAmount = amount - discount;
          cout<<"final bill amount is "<<finalAmount;
      
       return 0;
 }