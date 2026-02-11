#include <iostream>
using namespace std;
void findMinMax(int arr[], int size, int &minval, int &maxval)
{

     for (int i = 0; i < size; i++)
     {
          if (arr[i] > maxval)
          {
               maxval = arr[i];
          }
     }
     minval = maxval;
     for (int i = 0; i < size; i++)
     {
          if (arr[i] < minval)
          {
               minval = arr[i];
          }
     }
     cout<<"Minimum value in the array is : "<<minval<<endl;
     cout<<"Maximum value in the array is : "<<maxval<<endl;

}
int main()
{
     int n;
     int max = 0, min = 0;
     cout << "Enter the number of element you required in an array : " << endl;
     cin >> n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cout << "enter the elements of array : ";
          cin >> arr[i];
     }
     for (int i = 0; i < n; i++)
     {

          cout << "value of " << i+1 << " element is " << arr[i] << endl;
     }
     findMinMax( arr,n,max,min);
     

     return 0;
     }
