//pi 3.1415926535
// 2 decimal places / 5 decimal places
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num = 3.1415926535;
    cout << "Default value " << num <<endl;
    // 2 precision 
    cout << "Precision 2: " << fixed << setprecision(2)<< num<<endl;
    cout << "Precision 5: " << fixed << setprecision(5)<< num<<endl;

    return 0;
}
