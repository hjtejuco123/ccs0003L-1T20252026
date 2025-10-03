#include <iostream>
#include <string>
using namespace std;
int main() {
    string line1, line2;
    cout << "Enter first line: ";
    getline(cin, line1);
    cout << "Enter second line: ";
    getline(cin, line2);
    cout << "First Line: " << line1 << "\nSecond Line: " << line2;
    return 0;
}
