// Danny Im
// SID: 861114837
// Date: April 7th, 2015

#include <iostream>
using namespace std;

#ifndef __Lab1List_H__
#define __Lab1List_H__

#include "Node.h"

template <typename T>

class Lab1List
{
    private:
        Node* head;
        Node* tail;
    
    public:
        Lab1List();
        Lab1List(const T&);
        Lab1List& rotate(int);
        //Lab1List& operator+(Lab1List&, Lab1List&);
        ~Lab1List();
        
        void pop_front();
        void push(T);
        void display() const;
};

#endif