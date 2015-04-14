// Danny Im
// SID: 861114837
// Date: April 7th, 2015

#include <iostream>
using namespace std;

#include "Lab1List.h"
#include "Node.h"

/*
        Lab1List(); /done
        Lab1List(const T&); 
        Lab1List& rotate(int)
        Lab1List& operator+(Lab1List& head1, Lab1List& head2);
        ~Lab1List(); /done
        
        void pop_front(); /done
        void push(T); 
        void display() const; /done
    */
    
template <typename T>
        
Lab1List<T>::Lab1List()
:head(NULL), tail(NULL)
{ }

//Lab1List::Lab1List(const T& str)
//:head(str), tail (NULL)
//{ }

//Lab1List::Lab1List& operator+(Lab1List& head1, Lab1List& head2);
//:

template <typename T>

Lab1List::~Lab1List()
{
    while(head!=0)
    {
        pop_front();
    }
}

template <typename T>

void Lab1List::pop_front()
{
    if(head==0)
    {
        return;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename T>

void Lab1List::push(T val)
{
    if(head==0)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        temp-> next = NULL;
        tail = temp;
        return;
    }
    else
    {
        Node *temp = new Node(val);
        temp->next = 0;
        tail->next = temp;
        tail = temp;
    }   
 }
 
template <typename T>

void Lab1List::display() const 
{ 
    Node *temp;
    if(head!=0)
    {
        for(temp = head; temp->next!=0; temp = temp->next)
        {
            cout << temp->data << " ";
        }
        cout << temp->data << endl;
    }
}