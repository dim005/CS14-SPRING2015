#include <iostream>
using namespace std;

int main()
{
    int x = 23;
    int y = 0;
    
    cout << x << " " << y << endl;
    
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y << endl;
}