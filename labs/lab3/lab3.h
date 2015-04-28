// Name: Danny
// SID: dim005
// Date: Apr 21, 2015
// Approach:

#include <iostream>
#include <stack>
#include <array>

using namespace std;

#ifndef __lab3_h__
#define __lab3_h__

template <typename T>
class TwoStackFixed
{
private:
    int size;
    int partition;
    
public:
    TwoStackFixed(int size, int maxtop)
    {
        T arr1[size];
        partition = maxtop;
    }
    
    ~TwoStackFixed()
    {
        
    }
    
    void pushStack1(T value)
    {
        if(arr1[0]==0)
        {
            arr1[0] = value;
        }
        else
        {
            
        }
    }
    
    void pushStack2(T value);
    {
        
    }
    
    T popStack1()
    { }
    
    T popStack2()
    { }
    
    bool isFullStack1()
    { }
    
    bool isFullStack2()
    { }
    
    bool isEmptyStack1()
    { }
    
    bool isEmptyStack2()
    { }
    
    void display()
    { }
};

TwoStackFixed(int size, int maxtop)
{
    
}

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