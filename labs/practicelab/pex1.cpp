#include <iostream>
using namespace std;

int main()
{
    int userin = 0;
    int value = 0;
    int sum = 0;
    cin >> userin;

    while (userin != 0)
    {
        value = userin % 10;
        sum += value;
        userin = userin/10;
    }
    
    cout << sum;
    return 0;
}