#include<iostream>
#include<string>
using namespace std;

class vehicle_rental{
     public : 
     int vehicle_number;
     float rental_price;

     vehicle_rental( int vn ,float rp){

     vehicle_number = vn;
     rental_price = rp;
     cout<<"vehicle number is : "<<" "<< vn<<endl;
     cout<<"rental price  is : "<<" "<< rp<<endl;
     }

};
class car:public vehicle_rental{
    public:
   int seatp;
   string cartype;
   car( int vehicle_number ,float rental_price ,int sp ,string ctype):vehicle_rental(  vehicle_number, rental_price ){
    seatp=sp;
    cartype = ctype;
    cout<<"seating capacity is"<<" "<<sp;
   }
};
int main(){

    car c( 4578,10000,5,"honda city");
    
    return 0;
}
