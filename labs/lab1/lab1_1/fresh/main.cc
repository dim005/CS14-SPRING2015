// Danny Im
// SID: 861114837
// Date: April 7th, 2015
// Approach:

#include <iostream>
using namespace std;

#include "Lab1List.h"

int main()
{
      Lab1List a("hello");
      Lab1List b("hello");
      Lab1List c;
    
      a.display();
      cout << endl;
    
      b.rotate(2);
      b.display();
      cout << endl;
    
   
     c = a + b;
     c.display();
     cout << endl;
//    
//    Lab1List d("world");
//    Lab1List e("world");
//    Lab1List f;
//    
//    e.rotate(3);
//    f = e + d;
//    f.display();
//    cout << endl;
    
    
    return 0;
}