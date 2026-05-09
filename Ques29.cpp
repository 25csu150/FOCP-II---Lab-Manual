#include <iostream>
using namespace std;

int main() {
    int temp[30], minVal;
    cout << "Enter 30 temperatures: ";
    for(int i=0; i<30; i++) cin >> temp[i];
    minVal = temp[0];
    for(int i=1; i<30; i++)
        if(temp[i] < minVal) minVal = temp[i];
    cout << "Minimum temperature = " << minVal;
    return 0;
}
