/******************************************************************************
Simple if..else statement 
Syntax
    if (conditional-expression)
        statement_true;
    else
        statement_false;
    
    if (conditional-expression){
        statement_true;
    }else{
        statement_false;
    }
    
    if (conditional-expression){
        statement_true;
        statement;
        statement;
    }else{
        statement_false;
        statement;
        statement;
    }

Problem - input number is odd or even (simple if..else statement)
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
    }else{
        cout << "the input number is odd" << endl;
    }
    
    
    
    return 0;
}



