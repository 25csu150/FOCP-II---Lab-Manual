#include <iostream>
using namespace std;

int main() {
     int row ,column;
     cout<<"enter the rows and column : ";
     cin>>row;
     cin>>column;
   
    for (int i = row; i >= 1; i++) {
       
        for (int j = column; j >= 1; j++) {
            cout << j<< " ";
        }
        cout << endl; 
    }
    return 0;
}