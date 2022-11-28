#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    string action;
    int number2 = 0;

  
    cout << "Enter the first number: " << endl;
    cin >> number1;
    cout << "Enter an action" << endl;
    cin >> action;
    cout << "Enter the second number" << endl;
    cin >> number2;


    if (action == "+") {
        cout << number1 + number2;
    }
    else if (action == "-") {
        cout << (number1 - number2);
    }
    else if (action == "*") {
        cout << number1 * number2;
    }
    else if (action == "/" or action == ":"); {
        
        int otv = number1 / number2;
        cout << otv;
    }


    return 0;
}