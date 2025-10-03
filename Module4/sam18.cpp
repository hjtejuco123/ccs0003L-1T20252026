#include <iostream>
#include <string>
using namespace std;
int main() {
    int age;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Ignore the newline character left by cin
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Name: " << name << ", Age: " << age;
    return 0;
}
