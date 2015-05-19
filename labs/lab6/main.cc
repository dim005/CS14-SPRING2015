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
    list<int>::iterator it;
    
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
    
    vector <pair<int, int> > pairList;
    pairList.push_back(make_pair(1,2));
    pairList.push_back(make_pair(3,-1));
    pairList.push_back(make_pair(-1,3));
    pairList.push_back(make_pair(0,0));
    pairList.push_back(make_pair(2,3));
    pairList.push_back(make_pair(1,2));
    pairList.push_back(make_pair(1,-2));
    pairList.push_back(make_pair(8,10));
    
    cout << "pre: ";
    for(int i = 0; i<8; i++)
    {
        cout << "(" << pairList[i].first << "," << pairList[i].second << ")" << " ";
    }
    cout << endl;
    
    selecitonSort(pairList);
    
    cout << "post: ";
    for(int i = 0; i<8; i++)
    {
        cout << "(" << pairList[i].first << "," << pairList[i].second << ")" << " ";
    }
    cout << endl << endl;
    
//    vector <pair<int, int> > pairList2;
//    pairList2.push_back(make_pair(2,2));
//    pairList2.push_back(make_pair(1,1));
//    pairList2.push_back(make_pair(1,0));
//    pairList2.push_back(make_pair(2,3));
//    
//    cout << "pre: ";
//    for(int i = 0; i<4; i++)
//    {
//        cout << "(" << pairList2[i].first << "," << pairList2[i].second << ")" << " ";
//    }
//    cout << endl;
//    
//    selecitonSort(pairList2);
//    
//    cout << "post: ";
//    for(int i = 0; i<4; i++)
//    {
//        cout << "(" << pairList2[i].first << "," << pairList2[i].second << ")" << " ";
//    }
//    cout << endl << endl;

    return 0;
}
