// Danny Im
// SID: 861114837
// Date: April 14th, 2015
// Approach:

#include <iostream>
#include <forward_list>
#include <array>

using namespace std;

#include "lab2.h"
#include "lab2.cpp"

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
    b.push_front('h');
    b.push_front('e');
    b.push_front('l');
    b.push_front('l');
    b.push_front('o');
    forward_list<char> c;
    b.push_front('d');
    b.push_front('l');
    b.push_front('r');
    b.push_front('o');
    b.push_front('w');
//    listCopy(b, c);

    forward_list<int> d;
    d.push_front(6);
    d.push_front(5);
    d.push_front(4);
    d.push_front(3);
    d.push_front(2);
    d.push_front(1);
    forward_list<int> e;
    e.push_front(1);
    //e.push_front(2);
    e.push_front(3);
    e.push_front(4);
    e.push_front(6);
    printLots(d, e);
    return 0;
}