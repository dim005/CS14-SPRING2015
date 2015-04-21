// Danny Im
// SID: 861114837
// Date: April 14th, 2015
// Approach:

#include <iostream>
#include <forward_list>
#include <array>

using namespace std;

//--------------------------------------------------

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

//template <typename T>
//void printLots(forward_list <T> L, forward_list <int> P)
//{
//    int counter = 1;
//    while(P.empty()!=true||L.empty()!=true)
//    {
//        if(P.front()==counter)
//       {
//           cout << L.front();
//            P.pop_front();
//        }
//        counter++;
//        L.pop_front();
//    }
//}