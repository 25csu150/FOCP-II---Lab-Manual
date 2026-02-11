#include <iostream>
using namespace std;
bool isprime(int n)
{
     for (int i = 2; i <= n / 2; i++)
     {
          if (n % i == 0)
          {
               return false;
               break;
          }
     }
     return true;
}
int main()
{

     int a;
     cout << " enter the value of a : " << endl;
     cin >> a;
     if (isprime(a) == true)
     {
          cout << "prime " << endl;
     }
     else
     {
          cout << "not prime " << endl;
     }
     return 0;
}