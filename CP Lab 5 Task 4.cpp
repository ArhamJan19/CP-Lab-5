#include <iostream>
using namespace std;
int main() 
{
    char Option;
    float Number1, Number2, Answer;
    char Operator;
    do {
        cout << "Enter first number, operator, and second number: ";
        cin >> Number1 >> Operator >> Number2;

        switch (Operator) {
        case '+':
            Answer = Number1 + Number2;
            break;
        case '-':
            Answer = Number1 - Number2;
            break;
        case '*':
            Answer = Number1 * Number2;
            break;
        case '/':
            if (Number2 != 0) {
                Answer = Number1 / Number2;
            }
            else {
                cout << "Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid Operator" << endl; 
        }

        cout << "Answer = " << Answer << endl;

        cout << "Do you want to perform another calculation (Y/N) : ";
        cin >> Option;
    } while (Option == 'Y' || Option == 'y');

    return 0;
}