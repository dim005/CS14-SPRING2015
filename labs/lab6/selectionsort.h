// Name: Danny Im
// SID: 861114837
// Date: 5/12/15
// Approach:

#include <iostream>
#include <utility>
#include <list>
#include <vector>

using namespace std;

#ifndef lab6_lab6_h
#define lab6_lab6_h


template<typename L>
void selecitonSort(L& l)
{
    int moves = 0;
    int copies = 0;
    for(auto i = l.begin(); i != l.end() ; i++)
    {
        for(auto j = i; j != l.end() ; j++)
        {
            if(*i > *j)
            {
                swap(*i, *j);
                moves+=3;
            }
        }
    }
    cout << copies << " copies and " << moves << " moves" << endl;
}




#endif
