// Danny Im
// SID: 861114837
// Date: April 7th, 2015
// Approach:

#include <iostream>
using namespace std;

#include "Lab1List.h"
#include "Node.h"

/*      Lab1List();                 /done
        Lab1List(const string&);    /done
        ~Lab1List();                /done
        
        Lab1List& operator+(Lab1List&); 
        
        void rotate(int k);
        void pop_front();           /done
        void push(char);            /done
        void display() const;       /done
*/
    
Lab1List::Lab1List()
:head(NULL), tail(NULL)
{ }

Lab1List::Lab1List(const string& str)
:head(str), tail (NULL)
{ }

//Lab1List::Lab1List& operator+(Lab1List& head2);
//:

Lab1List::~Lab1List()
{
    while(head!=0)
    {
        pop_front();
    }
}

//void Lab1List::rotate(int k)
//{ }

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

void Lab1List::push(char val)
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