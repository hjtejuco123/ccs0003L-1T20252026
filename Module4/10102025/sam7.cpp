/*std::showpoint: Forces the display of the 
decimal point for floating-point numbers.

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    
    double num1 = 5.0;
    double num2 = 3.14159;
    double num3 = 7.8;
    
    cout << showpoint << fixed << setprecision(2);
    //print 
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
    cout << "Num3: " << num3 << endl;
    return 0;
}
