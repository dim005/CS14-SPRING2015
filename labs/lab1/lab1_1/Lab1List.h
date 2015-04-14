// Danny Im
// SID: 861114837
// Date: April 7th, 2015
// Approach:

#include <iostream>
using namespace std;

#ifndef __Lab1List_H__
#define __Lab1List_H__

#include "Node.h"

class Lab1List
{
    private:
        Node* head;
        Node* tail;
    
    public:
        Lab1List();
        Lab1List(const string&);
        ~Lab1List();
        
        //Lab1List& operator+(Lab1List&);
        
        //void rotate(int k);
        void pop_front();
        void push(char);
        void display() const;
};

#endif