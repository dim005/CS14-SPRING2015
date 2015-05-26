// Name: Danny Im
// SID: 861114837
// Date: 5/19/15
// Approach:

#include <iostream>
#include <fstream>
#include <chrono>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <set>

using namespace std;

    int myrandom (int i) { return rand()%i;}

int main()
{
    // ifstream inData;
    // string filename = "words.txt";
    // inData.open(filename.c_str());
    
    // vector<string> wordlist;
    
    using namespace std::chrono;
    
    ifstream myfile("words.txt");
    string line;
    vector<string> myLines;
    while(getline(myfile,line))
    {
        myLines.push_back(line);
    }
    
    myfile.close();

    random_shuffle(myLines.begin(), myLines.end(), myrandom);

    set<string> BST;
    unordered_set<string> hashtable;
    
    ofstream fout("data.txt");
    
    steady_clock::time_point t1BST = steady_clock::now();
    for(int i = 0; i<4999; i++)
    {
        BST.insert(myLines[i]);
    }
    steady_clock::time_point t2BST = steady_clock::now();
    duration<double> time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    steady_clock::time_point t1hash = steady_clock::now();
    for(int i = 0; i<4999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    steady_clock::time_point t2hash = steady_clock::now();
    duration<double> time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "5000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/5000;
    time_spanhash = time_spanhash/5000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<9999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<9999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "10000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/10000;
    time_spanhash = time_spanhash/10000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<14999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<14999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "15000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/15000;
    time_spanhash = time_spanhash/15000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<19999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<19999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "20000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/20000;
    time_spanhash = time_spanhash/20000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<24999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<24999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "25000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/25000;
    time_spanhash = time_spanhash/25000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<29999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<29999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "30000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/30000;
    time_spanhash = time_spanhash/30000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<34999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<34999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "35000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/35000;
    time_spanhash = time_spanhash/35000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<39999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<39999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "40000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/40000;
    time_spanhash = time_spanhash/40000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<44999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<44999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "45000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/45000;
    time_spanhash = time_spanhash/45000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
    
    t1BST = steady_clock::now();
    for(int i = 0; i<49999; i++)
    {
        BST.insert(myLines[i]);
    }
    t2BST = steady_clock::now();
    time_spanBST = duration_cast<duration<double>>(t2BST-t1BST);
    
    t1hash = steady_clock::now();
    for(int i = 0; i<49999; i++)
    {
        hashtable.insert(myLines[i]);
    }
    t2hash = steady_clock::now();
    time_spanhash = duration_cast<duration<double>>(t2hash-t1hash);
    
    fout << "50000 " << time_spanBST.count() << " " << time_spanhash.count() << " ";
    time_spanBST = time_spanBST/50000;
    time_spanhash = time_spanhash/50000;
    fout << time_spanBST.count() << " " << time_spanhash.count() << endl;
    
    random_shuffle(myLines.begin(), myLines.end(), myrandom);
    BST.clear();
    hashtable.clear();
    //-------
}