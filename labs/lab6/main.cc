// Name: Danny Im
// SID: 861114837
// Date: 5/12/15
// Approach:

#include <iostream>

using namespace std;

#include "selectionsort.h"

int main(int argc, const char * argv[]) {

    vector<int> vectorlist(6);
    vectorlist[0] = 2;
    vectorlist[1] = 4;
    vectorlist[2] = 5;
    vectorlist[3] = 1;
    vectorlist[4] = 8;
    vectorlist[5] = 9;
    
    cout << "pre: ";
    for(int i = 0; i<6; i++)
    {
        cout << vectorlist[i] << " ";
    }
    cout << endl;
    
    selecitonSort(vectorlist);

    cout << "post: ";
    for(int i = 0; i<6; i++)
    {
        cout << vectorlist[i] << " ";
    }
    cout << endl << endl;
    
    
    
    
    list<int> listlist;
    list<int>::iterator it = listlist.begin();
    
    listlist.push_back(2);
    listlist.push_back(4);
    listlist.push_back(5);
    listlist.push_back(1);
    listlist.push_back(8);
    listlist.push_back(9);
    
    cout << "pre: ";
    for(it = listlist.begin(); it!=listlist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    selecitonSort(listlist);
    
    cout << "post: ";
    for(it = listlist.begin(); it!=listlist.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << endl;
    
    
    pair<int, int> pairlist;
    
    return 0;
}
