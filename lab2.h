// Danny Im
// SID: 861114837
// Date: April 14th, 2015
// Approach:

#include <iostream>
#include <forward_list>
#include <array>


using namespace std;

#ifndef __lab2_h__
#define __lab2_h__

template <typename T>
struct Node
{
    T data;
    Node *next;
    Node (T data) : data(data), next(0)
    { }
};

template <typename T>
class List
{
private:
    Node<T> *head;
    Node<T> *tail;
    
public:
    List();
    ~List();
    
    void pop_front();
    void display() const;
    
    void push(T val);
    void elementSwap (int pos);
};

template <typename T>
List<T>::List()
:head (0), tail(0)
{ }

template <typename T>
List<T>::~List()
{
    while(head!=0)
    {
        pop_front();
    }
}

template <typename T>
void List<T>::pop_front()
{
    if(head==0)
    {
        return;
    }
    else
    {
        Node<T> *temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename T>
void List<T>::display() const
{
    if(head!=0)
    {
        Node<T> *temp;
        for(temp = head; temp!=0; temp = temp->next)
        {
            cout << temp->data;
        }
        cout << endl;
    }
}
template <typename T>
void List<T>::push(T val)
{
    if(head==0)
    {
        Node<T> *temp = new Node<T>(val);
        temp->next = head;
        head = temp;
        for(Node<T> *temp2 = head; temp2!=0; temp2 = temp2->next)
        {
            tail = temp2;
        }
    }
    else
    {
        Node<T> *temp = new Node<T>(val);
        temp->next = 0;
        tail->next = temp;
        tail = temp;
    }
}
//--------------------------------------------------

template <typename T>
void List<T>::elementSwap (int pos)
{
    Node<T> *tempA, *tempB, *tempC; // A->B->C
    tempA = head;
    tempB = head->next;
    tempC = tempB->next;
    
    if(pos==1)
    {
        tempA->next = tempC;
        tempB->next = tempA;
        head = tempB;
    }
    else
    {
        for(int i = 2; i!=pos; i++)
        {
            tempA = tempA->next;
            tempB = tempB->next;
            tempC = tempC->next;
        }
        if(tempC->next==tail)
        {
            tempB->next = tail;
            tempC->next = tempB;
            tempA->next = tempC;
        }
        else
        {
            tempB->next = tempC->next;
            tempC->next = tempB;
            tempA->next = tempC;
        }
    }
}

#endif