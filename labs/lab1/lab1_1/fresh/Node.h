// Danny Im
// SID: 861114837
// Date: April 7th, 2015
// Approach:

#include <iostream>
using namespace std;

#ifndef __Node_h__
#define __Node_h__

struct Node
{
    char data;
    Node *next;
    Node (char data) : data(data), next(0)
    { }
};

#endif