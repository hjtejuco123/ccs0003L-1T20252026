/******************************************************************************
Examples of data types 
int, float, char, string
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //syntax data_type var_name 
    //declare
    // int a;
    // float b;
    // char c;
    // string str; 
    // //assignment 
    // a=10;
    // b=5.5;
    // c-'A';
    // str="Hadji";
    //declaration and assignment
    int a = 10;     //this is an integer declaration
    float b=5.5;    //this is a float var 
    double xx=20.55; //double
    char c ='A';    //this is a char var 
    string str ="Hadjie";
    
    cout<<"Data type Demo"<<endl;
    cout <<"Integer: " << a << endl;
    cout <<"Float: " << b << endl;
    cout <<"Double " << xx << endl;
    cout <<"char " << c << endl;
    cout <<"String"<< str <<endl;
    cout <<"String Methods " << endl;
    cout <<"Length of string " << str.length() << endl; //int value 
    cout <<"Concatenate: " << str + " World" << endl;
    cout <<"Find 'e': " << str.find('e') << endl;
    
    
    
    
    
    
    
    
    return 0;
}
