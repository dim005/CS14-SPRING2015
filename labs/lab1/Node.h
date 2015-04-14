// Danny Im
// SID: 861114837
// Date: April 7th, 2015

#include <iostream>
using namespace std;

#ifndef __Node_H__
#define __Node_H__

template <typename T>

struct Node
{
    T data;
    Node *next;
    Node ( T data )
    : data(data), next(0)
    { }
};

#endif
