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

Problem - determine the largest among three input numbers
conditions - 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if ((a>b) && (a>c)) {
        cout << "the largest is " << a << endl;
    }else if (b>c){
        cout << "the largest is " << b << endl;
    }else{
        cout << "the largest is " << c << endl;
    }
  
  
  
    return 0;
}



