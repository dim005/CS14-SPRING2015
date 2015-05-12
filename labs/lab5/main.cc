// Name: Danny Im
// SID: 861114837
// Date: 5/11/15
// Approach:

#include <iostream>
using namespace std;

#include "lab5.h"

int main()
{
    BST<int> tree;
    BST<int> subtree;
    tree.insert(50);
    tree.insert(20);
    tree.insert(10);
    tree.insert(40);
    tree.insert(35);
    tree.insert(45);
    tree.insert(60);
    tree.insert(70);
    
    
    cout << "Part 1: " << endl;
    
    tree.minCover();
    tree.displayMinCover();
    
    cout << endl << "Part 2: " << endl;
    cout << "Sum - 80" << endl;
    int sum = 80;
    int buffer[100];
    tree.findSumPath(tree.root , sum, buffer);
    sum = 145;
    cout << "Sum - 145" << endl;
    tree.findSumPath(tree.root , sum, buffer);
    sum = 180;
    cout << "Sum - 180" << endl;
    tree.findSumPath(tree.root , sum, buffer);
    sum = 10;
    cout << "Sum - 10" << endl;
    tree.findSumPath(tree.root , sum, buffer);
    cout << endl << "Part 3: " << endl;
    
    int hd = 0;
    map<int, int> m;
    
    tree.vertSum(tree.root, hd, m);
    tree.printVertSum(m);
    
    cout << endl;
    
    return 0;
}