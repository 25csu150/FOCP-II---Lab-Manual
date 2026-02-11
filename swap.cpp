#include <iostream>
using namespace std;

void swapbyvalue(int a, int b)
{

     int temp = a;
     a = b;
     b = temp;
     cout << "A and B after swap in function : " << a <<" "<< b<<endl;
}
void swapbyreference (int &a ,int &b){
    
     int temp = a;
     a = b;
     b = temp;
     cout << "A and B after swap in function : " << a <<" "<< b<<endl;

}
main()
{
     int x, y;
     cout << "enter the values of a and b : " << endl;
     cin >> x >> y;
     cout << "x and y before calling in main : " <<x<<" "<<y<< endl;
     swapbyvalue(x, y);
     swapbyreference(x, y);
     cout << "x and y after calling in main : " <<x<<" "<<y<< endl;
     return 0;
}
