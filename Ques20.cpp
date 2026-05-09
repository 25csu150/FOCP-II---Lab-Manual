#include <iostream>
using namespace std;

int main() {
     int row ,column;
     cout<<"enter the rows and column : ";
     cin>>row;
     cin>>column;
   
    for (int i = 1; i <= row; i++) {
       
        for (int j = 1; j <= column; j++) {
            cout << j<< " ";
        }
        cout << endl; 
    }
    return 0;
}
