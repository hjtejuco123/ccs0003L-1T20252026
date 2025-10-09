//std::setfill(c): Sets the fill character to c for padding.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Text: " << setw(10) << "Hello" << endl;
    cout << "Fill: " << setfill('*') << setw(10) << "Hello"<<endl;
    return 0;
}
