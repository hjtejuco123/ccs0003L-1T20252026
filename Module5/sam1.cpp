/******************************************************************************
Simple if statement 
Syntax
    if (conditional-expression)
        statement;
    
    if (conditional-expression){
        statement;
    }
    
    if (conditional-expression){
        statement;
        statement;
        statement;
    }

Problem - input and determine the largest (simple if)
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a>b){
        cout << "Largest = " << a << endl;
    }
    if (b>a){
        cout << "Largest = " << b << endl;
    }
    if (a==b){
        cout << "Both numbers are equal " << endl;
    }
    
    return 0;
}



