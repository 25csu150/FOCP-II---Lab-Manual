#include <iostream>
// #include<conio.h>
using namespace std;
int main()
{
     char ch;
     cout << "enter the Number , character as well as vowels : ";
     cin >> ch;
     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
     {
          cout << ch << " is a Vowel.";
     }
     else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
     {
          cout << ch << " is a Vowel.";
     }
     else
     {
          cout << ch << " is a Consonant.";
     }

     return 0;
}