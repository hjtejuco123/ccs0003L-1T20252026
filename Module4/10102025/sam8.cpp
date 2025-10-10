/*
std::noshowpoint: 
Hides the decimal point if not necessary.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    double num1 = 5.0;
    cout << "Num1: " << num1 << endl;
    cout << "noshowpoint: " << noshowpoint << num1 <<endl;
    return 0;
}
