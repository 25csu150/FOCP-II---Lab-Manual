#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter range: ";
    cin >> start >> end;

    for(int i = start; i <= end; i++) {
        bool prime = true;
        if(i < 2) prime = false;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                prime = false;
                break;
            }
        }
        if(prime) cout << i << " ";
    }
    return 0;
}

