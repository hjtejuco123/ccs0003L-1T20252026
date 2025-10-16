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

Problem - input number is odd or even (simple if statement)
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a%2==0){
        cout << "the input number is even" << endl;
    }
    if (a%2==1){
        cout << "the input number is odd" << endl;
    }
    
    
    
    return 0;
}



