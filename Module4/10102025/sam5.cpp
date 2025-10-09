/*std::left, std::right, std::internal: 
Aligns output to the left, right, or internally 
(padding between sign and number).
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Right Aligned: " << setw(10) << right << "Hello" << endl;
    cout << "Left Aligned: " <<setw(10) << left << "Hello" <<endl;
    cout << "Internal (-123) "<< setw(10) << internal << -123 <<endl;
    return 0;
}
