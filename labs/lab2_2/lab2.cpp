// Danny Im
// SID: 861114837
// Date: April 14th, 2015
// Approach:

#include <iostream>
#include <forward_list>
#include <array>

using namespace std;

//--------------------------------------------------

// bool isPrime(int i)
// {
//     for(int k = 2; k < i; k++)
//     {
//         if(i%k ==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int primeCount(forward_list<int> lst)
// {
//     if(lst.empty()==true)
//     {
//         return 0;
//     }
//     else if(isPrime(lst.front()))
//     {
//         lst.pop_front();
//         return primeCount(lst);
//     }
//     return primeCount(lst);
// }


//--------------------------------------------------

template <typename T>
void listCopy(forward_list<T> L, forward_list<T>& P)
{
    P.reverse();
    L.reverse();
    while(L.empty()!=true)
    {
        P.push_front(L.front());
        L.pop_front();
    }
    P.reverse();
}

//--------------------------------------------------

template <typename T>
void printLots(forward_list <T> L, forward_list <int> P)
{
    int counter = 1;
    while(L.empty()!=true)
    {
        if(P.front()==counter)
        {
            cout << L.front();
            P.pop_front();
        }
        counter++;
        L.pop_front();
    }
}