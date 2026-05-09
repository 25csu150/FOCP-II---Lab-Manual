#include <iostream>
using namespace std;

int main() {
    int salary[10], sum=0;
    cout << "Enter 10 salaries: ";
    for(int i=0; i<10; i++) {
        cin >> salary[i];
        sum += salary[i];
    }
    cout << "Total = " << sum << endl;
    cout << "Average = " << sum/10.0;
    return 0;
}
