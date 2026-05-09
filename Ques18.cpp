#include <iostream>
using namespace std;

int main() {
    string id;
    cout << "Enter ID: ";
    cin >> id; 
    int flag=1;
    int len = id.length();

    // Compare characters from both ends
    for (int i = 0; i < len / 2; i++) {
        if (id[i] != id[len - i - 1]) {
            flag=0;
            break;
        }
    }

    if (flag == 1)
        cout << "The ID is a palindrome." << endl;
    else
        cout << "The ID is not a palindrome." << endl;

    return 0;
}
