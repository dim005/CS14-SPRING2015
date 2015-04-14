// Danny Im
// SID: 861114837
// Date: April 7th, 2015
// Approach:

#include <iostream>
using namespace std;

#include "Lab1List.h"

Lab1List::Lab1List()
:head(0), tail(0)
{ }

Lab1List::Lab1List(const string& str)
:head(0), tail(0)
{
    for(int i = 0; str[i]!=0; i++)
    {
        push(str[i]);
    }
}

Lab1List::~Lab1List()
{
    while(head!=0){
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
}

Lab1List& Lab1List::operator+ (Lab1List& head2)
{
    static Lab1List result;
    for(Node *temp = head2.head; temp!=0; temp = temp->next)
    {
        char c;
        c = this->head->data + head2.head->data;
        result.push(c);
        
        this->head = this->head->next;
        head2.head = head2.head->next;
    }
    return result;
}


void Lab1List::push(char val)
{
    if(head==0)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        for(Node *temp2 = head; temp2!=0; temp2 = temp2->next)
        {
            tail = temp2;
        }
    }
    
    else
    {
        Node *temp;
        temp = new Node(val);
        temp->next = 0;
        tail->next = temp;
        tail = temp;
    }
    
}

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

void Lab1List::display() const
{
    Node *temp;
    if(head!=0)
    {
        for(temp = head; temp!=0; temp = temp->next)
        {
            cout << temp->data;
        }
    cout << temp->data;
    }
}

void Lab1List::rotate(int k)
{
    for(int i=0; i<k; i++)
    {
        Node *temp = new Node(head->data);
        temp->next = 0;
        tail->next = temp;
        tail = temp;
        pop_front();
    }
}