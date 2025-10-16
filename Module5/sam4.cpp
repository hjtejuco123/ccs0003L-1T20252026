/******************************************************************************
Simple if..ladder statement 

Syntax
    if (conditional-expression1){
        statements;
    }else if (conditional-expression2){
        statements;
    }else{
        statements;
    }

Problem - determine the largest among two input numbers
conditions - a>b b>a a==b
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a>b){
        cout << "a is the largest " << endl;
    }else if(b>a){
        cout << "b is the largest " << endl;
    }else{
        cout << "a and b are equal " << endl;
    }
    return 0;
}



