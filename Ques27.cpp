#include <iostream>
using namespace std;

int main() {
    int price[10], maxVal;
    cout << "Enter 10 prices: ";
    for(int i=0; i<10; i++) cin >> price[i];
    maxVal = price[0];
    for(int i=1; i<10; i++)
        if(price[i] > maxVal) maxVal = price[i];
    cout << "Maximum price = " << maxVal;
    return 0;
}
