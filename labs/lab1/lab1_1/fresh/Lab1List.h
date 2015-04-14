// Danny Im
// SID: 861114837
// Date: April 7th, 2015
// Approach:

#include <iostream>
using namespace std;

#ifndef __Lab1List_h__
#define __Lab1List_h__

#include "Node.h"

class Lab1List
{
private:
    Node* head;
    Node* tail;
    
public:
    Lab1List();
    Lab1List(const string &str);
    ~Lab1List();
    
    Lab1List& operator+(Lab1List& head2);
    
    void push(char val);
    void pop_front();
    void display() const;
    void rotate(int k);
};


#endif