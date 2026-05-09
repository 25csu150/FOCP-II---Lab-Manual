#include <iostream>
using namespace std;

int main() {
    int low, high;
    cout << "Enter two limits: ";
    cin >> low >> high;

    for(int i=low; i<=high; i++) {
        bool prime = true;
        if(i < 2) prime = false;
        for(int j=2; j*j<=i; j++) {
            if(i % j == 0) { prime = false; break; }
        }
        if(prime) cout << i << " ";
    }
    return 0;
}
