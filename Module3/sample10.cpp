
#include <iostream>
using namespace std;

int main()
{
    int a=5, b=10;
    int max = (a>b) ? a:b;
    cout << "MAX " << max << endl;
    
    if (a>b){
        max=a;
    }else{
        max=b;
    }
    cout << "Max is "<< max << endl;
    
    
    return 0;
}
