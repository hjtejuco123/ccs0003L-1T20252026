//std::scientific: Forces floating-point numbers to be displayed in scientific notation.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num = 123456789.0;
    cout << "Default: " << num << endl;
    cout << "Scientific notation: " << scientific << num << endl;
    return 0;
}
