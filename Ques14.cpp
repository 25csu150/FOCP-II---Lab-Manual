#include <iostream>
using namespace std;

int main()
{
     int num1, num2, result;
     int choice;
     float display = 1;

     cout << "_____________Simple Menu-Driven Calculator__________ " << endl;

     while (display == 1)
     {

          cout << "Select an operation : " << endl;
          cout << "1. Addition (+)" << endl;
          cout << "2. Subtraction (-)" << endl;
          cout << "3. Multiplication (*)" << endl;
          cout << "4. Division (/)" << endl;
          cout << "Enter your choice (1-4): " << endl;
          cin >> choice;

          cout << "Enter first number: ";
          cin >> num1;
          cout << "Enter second number: ";
          cin >> num2;

          if (choice == 1)
          {
               result = num1 + num2;
               cout << "Result: " << result << endl;
          }
          else if (choice == 2)
          {
               result = num1 - num2;
               cout << "Result: " << result << endl;
          }
          else if (choice == 3)
          {
               result = num1 * num2;
               cout << "Result: " << result << endl;
          }
          else if (choice == 4)
          {
               if (num2 != 0)
               {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
               }
               else
               {
                    cout << "Error: Division by zero is not allowed." << endl;
               }
          }
          else
          {
               cout << "Invalid choice! Please select between 1 and 4." << endl;
          }

          cout << "if you want to stop the calculator then enter display value any real value rather than 1 : " << endl;
          cin >> display;
     }

     cout << "\nThank you for using the calculator." << endl;
     return 0;
}
