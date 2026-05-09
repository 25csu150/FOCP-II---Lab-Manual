#include <iostream>
using namespace std;

int main() {
    int marks[3][5];
    cout << "Enter marks of 3 students in 5 subjects:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<5; j++) {
            cin >> marks[i][j];
        }
    }
    cout << "Marks of student 2 in subject 3 = " << marks[1][2];
    return 0;
}
