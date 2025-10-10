/******************************************************************************
iomanip application

***************************************
ID      Name        Salary      Bonus 
***************************************
100     Hadji       5000         1.23e+06
---------------------------------------


*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //sample data
    int id = 100;
    string name = "Hadji";
    double salary = 5000.0;
    double bonus = 1234567.89;

    //table header 
    cout <<setw(80)<<setfill('*') << "" <<endl;   
    cout << setfill(' ') <<setw(15) << left << "ID"
         << setw(20) << left << "Name"
         << setw(15) << right << "Salary (PHP)"
         << setw(20) << right << "Bonus" << endl;
    cout <<setw(80)<<setfill('*') << "" <<endl;   

    cout << setfill (' ') << setw(15) << left << dec << id 
         << setw(20) << left << name 
         << fixed << showpoint << setprecision(2) <<setw(15) <<right<<salary
         << scientific << setprecision(2) << setw(20) << right << bonus <<endl;
    
    cout <<setw(80)<<setfill('-') << "" <<endl;    
    
    
    
    
    


    return 0;
}
