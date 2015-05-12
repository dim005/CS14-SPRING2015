// Name: Danny Im
// SID: 861114837
// Date: 5/28/15
// Approach:

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#ifndef lab4_lab4_h
#define lab4_lab4_h

typedef pair<int,int> Entry;
class priority_queue
{
    public:
        vector<Entry> entries;
        Entry& front() { return entries.back(); }
        void pop() { entries.pop_back(); }
        void push( Entry e )
        {
            entries.push_back( e );
            for ( int i = entries.size()-1; i != 0; --i )
            {
                if ( entries[i] <= entries[i-1] ) break; // replace this comparison with code for comparing int pairs.
                    swap(entries[i], entries[i-1]);
            }
        }
};

void coprimefill (int m, int n)
{
    
}
//queue as global variable

#endif
