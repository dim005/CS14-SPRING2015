// Danny Im
// SID: 861114837
// Date: April 14th, 2015
// Approach:

#include <iostream>
#include <forward_list>
#include <array>

using namespace std;

//--------------------------------------------------
//
//int primeCount(forward_list<int> lst)
//{
//    int prime_total = 0;
////    while(lst.front()!=0)
////    {
////        if(isPrime(lst.front()))
////        {
////            prime_total++;
////        }
////        lst.pop_front();
////        return primeCount(lst);
////    }
//    return prime_total;
//}
//
//bool isPrime(int i)
//{
////    int HalfValue = i/2;
////    //int DivisibleNumArray[HalfValue];
////    array<int, HalfValue> DivisibleNum;
////    int k = 0;
////    
////    while(HalfValue!=0)
////    {
////        if(i%HalfValue==0)
////        {
////            DivisibleNum[k] = i%HalfValue;
////            k++;
////        }
////        HalfValue--;
////    }
////    if(DivisibleNum.size()>1)
////    {
////        return false;
////    }
////    else
////    {
////        return true;
////    }
//    return true;
//}

//--------------------------------------------------

//Write a function void listCopy( forward_list <Type> L, forward_list& <Type>& P ) to copy a singly linked list L into a second singly linked list P in reverse order by only traversing L once which means the reverse of list L is to be concatenated onto the back of list P.
//template <typename T>
//void listCopy(forward_list<T> L, forward_list<T>& P)
//{
//    forward_list<T> tempCopy = L;
//    while(!tempCopy.empty())
//    {
//        P.insert_after();
//        tempCopy.pop_front();
//    }
//}

//--------------------------------------------------

//You are given a singly linked list L of a type, and another singly linked list P containing integers sorted in ascending order. Write a function void printLots (forward_list <Type> L, forward_list <int> P) to print the elements in L that are in positions specified by P. For instance, if P=1,3,4,6, the elements in positions 1,3,4, and 6 in L are printed.

template <typename T>
void printLots(forward_list <T> L, forward_list <int> P)
{
    int counter = 1;
    while(P.empty()!=true||L.empty()!=true)
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

//void display()
//for( const_iterator start = this->begin(); ; ) { }