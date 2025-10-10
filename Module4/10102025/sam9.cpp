/*
std::hex, std::oct, std::dec: 
Changes the base of integer output to hexadecimal, octal, or decimal.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num = 255;
    cout << "Decimal " << num << endl;
    cout << "Decimal " << dec << num << endl;
    cout << "Hexadecimal " << hex << num << endl;
    cout << "Octal " << oct << num << endl;
    
    
    return 0;
}
