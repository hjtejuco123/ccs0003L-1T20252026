/*std::showpoint: Forces the display of the 
decimal point for floating-point numbers.

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num = 5.0;
    cout << "Value of num: " << num << endl;
    cout << "Showpoint: " << showpoint << num << endl;
    return 0;
}
