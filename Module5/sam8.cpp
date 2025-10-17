/******************************************************************************
perform basic arithmetic operations
use char 
+ - * /
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    char op;
    double num1,num2;
    cout << "Enter the operator (+,-,*,/)";
    cin >> op;
    cout << "Enter two number: ";
    cin >> num1 >> num2;
    switch(op){
        case '+':
            cout << "Result " << num1+num2;
            break;
        case '-':
            cout << "Result " << num1-num2;
            break;
        case '*':
            cout << "Result " << num1*num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result " << num1/num2;
            else
                cout << "Division by zero ";
            break;
        default:
            cout << "Invalid operator ";
    }
    
    
    
    
    
    
    return 0;
}
