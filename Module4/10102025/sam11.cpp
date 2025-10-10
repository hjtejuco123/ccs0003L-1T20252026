/******************************************************************************
ceil, floor, trunc, round

ceil - 3.7 -> 4, -3.7 - -3.0
floor - 3.7 - 3, -3.7 - -4.0
trunc - 3.7 - 3. -3.7 - -3.0
round - 3.7 - 4.0, -3.7 - -4.0 

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double num1 = 3.7;
    double num2 = -3.7;
    
    cout << fixed << setprecision(2);
    
    cout << "Number: " << num1 << endl;
    cout << "Floor: " << floor(num1) << endl;
    cout << "Ceil: "<< ceil(num1)<<endl;
    cout << "Truc: "<< trunc(num1) <<endl;
    cout << "Round: "<< round(num1) << endl;
    cout << endl;
    cout << "Number: " << num2 << endl;
    cout << "Floor: " << floor(num2) << endl;
    cout << "Ceil: "<< ceil(num2)<<endl;
    cout << "Truc: "<< trunc(num2) <<endl;
    cout << "Round: "<< round(num2) << endl;
 
    
    
    

    return 0;
}


