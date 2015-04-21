// Name: Danny
// SID: dim005
// Date: Apr 21, 2015
// Approach: 

#include <iostream>
#include <stack>

using namespace std;

#ifndef __lab3_h__
#define __lab3_h__

class TwoStackFixed
{
    private:
        
    
    public:
        TwoStackFixed();
        TwoStackFixed(int size, int maxtop);
        ~TwoStackFixed();
        
        void pushStack1(T value);
        void pushStack2(T value);
        T popStack1();
        T popStack2();
        bool isFullStack1();
        bool isFullStack2();
        bool isEmptyStack1();
        bool isEmptyStack2();
        void display();
};

class TwoStackOptimal
{
    private:
        
    public:
        TwoStackOptimal();
        TwoStackOptimal(int size);
        ~TwoStackOptimal;
        
        void pushFlexStack1(T value);
        void pushFlexStack2(T value);
        T popFlexStack1();
        T popFlexStack2();
        bool isFullStack1();
        bool isFullStack2();
        bool isEmptyStack1();
        bool isEmptyStack2();
        void display();
};

#endif