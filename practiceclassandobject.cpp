// #include<iostream>
// using namespace std;
// int main (){
//      int a=2;
//      int b=10;
//      int r = a&&b;       // logical operator
//      cout<<r;


//      int x=2;
//      int y=4;
//      int r = a&b;        //  bitwise opeartor
//      cout<<r;


//      int m=200;
//      int n=500;
//      cout<<a&&b;          // due to priority of << is more of && then print 200 if we put bracket (a&&b) then print 1


//      return 0;
// }

#include<iostream>
using namespace std;

class Bankaccount {
     // private:
     // int balance ;

     public :
     int balance;
     string accountHolderName ;
     int rewardpoints;


     Bankaccount( int b ,string HolderName , int rewardpoint){
     
          accountHolderName = HolderName;
          rewardpoints = rewardpoint;
           balance = b;
          cout<<"account Holder Name is" << HolderName<< endl;
          cout<<"balance is "<<b<<endl;
          cout<<"rewardpoint is "<<rewardpoint<<endl;

     }
     void withdraw(  int bal ,int reward_point){

          cout<<"------------------after deducted amount -------------"<<endl;
          cout<<(bal-500)<<endl;
          cout<<(reward_point-20)<<endl;

     }

};
int main(){

     Bankaccount my(54566,"mohit",542);
     my.withdraw(54566,542);

     return 0;
}