//std::setw(n): Sets the width of the next output field to n characters.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   cout << "Text: " << "Hello" << endl;
   cout << "Using setw(10):" << setw(10) << "Hello" <<endl;

    return 0;
}
