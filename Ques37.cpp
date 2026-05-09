#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);   // reads full line including spaces

    bool valid = true;
    for(char ch : s) {
        if(!isalpha(ch) && !isspace(ch)) { // allow spaces too
            valid = false;
            break;
        }
    }
    if(valid) cout << "Valid string (only alphabets and spaces)";
    else cout << "Invalid string (contains digits/special chars)";
    return 0;
}
