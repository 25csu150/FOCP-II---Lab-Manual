#include <iostream>
using namespace std;
int main()
{
    int number, flag = 1; // flag=1=> prime number ,  flag=0 => not prime
    cout << "Enter the number : " << endl;
    cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "it is not prime number" << endl;
    }
    else
        cout << "it is prime number" << endl;
    return 0;
}
