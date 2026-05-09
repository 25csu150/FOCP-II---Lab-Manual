#include <iostream>
using namespace std;

int main()
{
     int n, sales, max_sales;

     cout << "Enter total number of sales: ";
     cin >> n;

     cout << "Enter first sales : ";
     cin >> sales;
     max_sales = sales;

     for (int i = 1; i <= n; i++)
     {
          cout << "Enter sales figure: ";
          cin >> sales;

          if (max_sales < sales)
          {
               max_sales = sales;
          }
     }

     cout << "Maximum sales figure is: " << max_sales << endl;

     return 0;
}
