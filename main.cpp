// Danny Im
// SID: 861114837
// Date: April 14th, 2015
// Approach:

#include <iostream>
#include <forward_list>
#include <array>

using namespace std;

#include "lab2.cpp"
#include "lab2.h"

int main()
{
    List<char> a;
    a.push('a');
    a.push('b');
    a.push('c');
    a.push('d');
    a.push('e');
    a.push('f');
    a.push('g');
    a.display();
    a.elementSwap(6);
    a.display();
    
    forward_list<char> b;
    forward_list<char> c;
    c.push_front('o');
    c.push_front('l');
    c.push_front('l');
    c.push_front('e');
    c.push_front('h');
    b.push_front('w');
    b.push_front('o');
    b.push_front('r');
    b.push_front('l');
    b.push_front('d');
    listCopy(b, c);

    forward_list<int> d;
    d.push_front(6);
    d.push_front(5);
    d.push_front(4);
    d.push_front(3);
    d.push_front(2);
    d.push_front(1);
    forward_list<int> e;
    e.push_front(6);
    //e.push_front(2);
    e.push_front(4);
    e.push_front(3);
    e.push_front(1);
    printLots(d, e);
    
    //primeCount(d);
    return 0;
}