#include <iostream>
using namespace std;
int main()
{
    int items;
    float expense, discount, totalexpense;
    cout << "enter the number of items :";
    cin >> items;
    cout << "enter expense :";
    cin >> expense;

    if (items > 1000)
    {
        discount = 0.10 * expense;
        totalexpense = expense - discount;
    }
    else
    {
        totalexpense = expense;
    }
    cout << "total expense is " << totalexpense;

    return 0;
}