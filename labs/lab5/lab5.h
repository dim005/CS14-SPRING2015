// Name: Danny Im
// SID: 861114837
// Date: 5/5/15
// Approach:

#ifndef lab5_h
#define lab5_h


#include <cassert>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <map>
#include <list>
#include <math.h>


using namespace std;


#define nil 0

// #define Value int //restore for testing.
template < typename Value >
class BST {
    
    class Node
    { // binary tree node
    public:
        Node* left;
        Node* right;
        Value value;
        bool selected;
        Node(const Value v = Value() )
        : value(v), left(nil), right(nil), selected(false)
        { }
        Value& content() {return value;}
        bool isInternal() { return left != nil && right != nil; }
        bool isExternal() { return left != nil || right != nil; }
        bool isLeaf()     { return left == nil && right == nil; }
        
        int height()
        {
            return findHeight(this);
        }
        
        int findHeight(const Node* n)
        {
            if(n == nil)
            {
                return 0;
            }
            
            int leftsub = findHeight(n->left);
            int rightsub = findHeight(n->right);
            return max(leftsub, rightsub) + 1;
        }
        
        int size()
        {
            return traverseSubTreeSize(this);
        }
        
        int traverseSubTreeSize(const Node* n)
        {
            if(n==nil)
                return 0;
            else
            {
                return traverseSubTreeSize(n->left) + traverseSubTreeSize(n->right) + 1;
            }
        }
        
    }; // Node
    
    //const Node* nil; //later nil will point to a sentinel node
    
    int count;
    
public:
    Node* root;
    
    int size()
    {
        return traverseTreeSize(this->root);
    }
    
    int traverseTreeSize(const Node* n)
    {
        if(n==nil)
            return 0;
        else
        {
            return traverseTreeSize(n->left) + traverseTreeSize(n->right) + 1;
        }
    }
    
    bool empty() { return size() == 0; }
    
    void print_node ( const Node* n) const
    {
        cout << n->value << " ";
    }
    
    bool search (Value x)
    {
        if(this->root == nil)
            return false;
        else
            return traverseTreeSearch(this->root, x);
    }
    
    bool traverseTreeSearch(const Node* n, Value x) const
    {
        if(n->value==x)
            return true;
        else if(x>n->value)
        {
            if(n->right==nil)
                return false;
            else
                return traverseTreeSearch(n->right, x);
        }
        else if(x<n->value)
        {
            if(n->left==nil)
                return false;
            else
                return traverseTreeSearch(n->left, x);
        }
        return false;
    }
    
    //---------------------------
    
    void preorder () const
    {
        if(this->root!=nil)
        {
            outputPreorder(this->root);
        }
    }
    
    void postorder() const
    {
        if(this->root!=nil)
        {
            outputPostorder(this->root);
        }
    }
    
    void inorder() const
    {
        if(this->root!=nil)
        {
            outputInorder(this->root);
        }
    }
    
    void outputPreorder (const Node* n) const
    {
        print_node(n);
        if(n->left)
            outputPreorder(n->left);
        if(n->right)
            outputPreorder(n->right);
    }
    
    void outputPostorder (const Node* n) const
    {
        if(n->left)
            outputPostorder(n->left);
        if(n->right)
            outputPostorder(n->right);
        print_node(n);
    }
    
    void outputInorder(const Node* n) const
    {
        if(n->left)
            outputInorder(n->left);
        print_node(n);
        if(n->right)
            outputInorder(n->right);
    }
    
    //---------------------------
    // LAB 5 FUNCTIONS
    //---------------------------
    
    void minCover()
    {
        Node* n = this->root;
        
        n = n->left;
        n->selected = true;
        n = this->root;
        n = n->right;
        n->selected = true;
        
        if(this->root!=nil)
        {
            flagCover(this->root);
        }
        n = this->root;
        n->selected = false;
        
    }
    
    void displayMinCover()
    {
        outputCover(this->root);
        cout << endl;
    }
    
    void flagCover(Node* n)
    {
        if(n->left!=nil&&n->right!=nil)
        {
            n->selected = true;
        }
        if(n->left)
            flagCover(n->left);
        if(n->right)
            flagCover(n->right);
    }
    
    void outputCover(const Node* n) const
    {
        if(n->left)
            outputCover(n->left);
        if(n->selected==true)
            print_node(n);
        if(n->right)
            outputCover(n->right);
    }

    void findSumPath(Node* n, int sum, int buffer[])
    {
        bool printed = false;
        if(n==nil)
            return;
        int i = 0;
        findSumPathLen(n, sum, buffer, i, printed);
        if(printed==false)
        {
            cout << "0" << endl;
        }
        else
            return;
    }
    
    void findSumPathLen(Node* n, int sum, int buffer[], int pathLen, bool& printed)
    {
        if(n==nil)
        {
            return;
        }
        
        buffer[pathLen] = n->value;
        pathLen++;
        
        if(n->left==nil && n->right==nil)
        {
            printBuffer(buffer, sum, pathLen, printed);
        }
        findSumPathLen(n->left, sum, buffer, pathLen, printed);
        findSumPathLen(n->right, sum, buffer, pathLen, printed);
    }
    
    void printBuffer(int buffer[], int sum, int pathLen, bool& printed)
    {
        int buffersum = 0;
        int buffersize = -1;

     for(int i = 0; i!=pathLen; i++)
     {
         buffersum += buffer[i];
         buffersize++;
     }

     if(buffersum == sum)
     {
         for(int i = buffersize; buffer[i]!=0; i--)
         {
             cout << buffer[i] << " ";
         }
         cout << endl;
         printed = true;
         return;
     }
     else
         return;
    }

    
    void vertSum(Node* node, int hd, std::map<int, int>& m)
    {
        if(node==nil)
        {
            return;
        }
        m[hd]+= node->value;
        vertSum(node->left,hd-1,m);
        vertSum(node->right,hd+1,m);
    }
    
    void printVertSum(std::map<int,int>& m)
    {
        map<int,int>::iterator itr;
        for(itr = m.begin(); itr != m.end(); itr++)
        {
            cout << (*itr).second << " ";
        }
    }
    
    //---------------------------
    
    Value& operator[](int n)
    {
        Node *temp = findNthNode(this->root, n);
        return temp->value;
    }
    
    Node *findNthNode(Node* n, int &x)
    {
        if(n == nil)
        {
            return nil;
        }
        
        Node *temp = findNthNode(n->left, x);
        
        if(temp!=nil)
        {
            return temp;
        }
        
        if(x-- == 0)
        {
            return n;
        }
        
        return findNthNode(n->right, x);
    }
    
    BST(): count(0), root(nil)
    { }
    
    void insert(Value X) { root = insert( X, root); }
    Node* insert( Value X, Node* T )
    {
        //The normal binary-tree insertion procedure...
        if (T == nil)
        {
            T = new Node( X ); // the only place T gets updated.
        }
        else if (X < T->value)
        {
            T->left = insert(X, T->left);
        }
        else if (X > T->value)
        {
            T->right = insert( X, T->right);
        }
        else
        {
            T->value = X;
        }
        
        //later, rebalincing code will be installed here
        return T;
    }
    
    void remove( Value X ){root = remove( X, root); }
    Node* remove( Value X, Node*& T)
    {
        //The normal binary-tree removal procedure...
        //Weiss's code is faster but way more intricate.
        if( T!= nil)
        {
            if( X > T->value)
            {
                T->right = remove( X, T->right);
            }
            else if ( X < T->value)
            {
                T->left = remove(X, T->left);
            }
            else    // X == T->value
            {
                if ( T->right != nil)
                {
                    Node* x = T->right;
                    while( x->left != nil) x = x->left;
                    T->value = x->value;                // successor's value
                    T->right = remove( T->value, T->right);
                }
                else if (T->left != nil)
                {
                    Node* x = T->left;
                    while (x-> right != nil) x = x->right;
                    T->value = x->value;                // predecessor's value
                    T->left = remove(T->value, T->left);
                }
                else    //*T is external
                {
                    delete T;
                    T = nil;        // the only updating of T
                }
            }
        }
        
        // later, rebalancing code will be installed here
        return T;
    }
    
    void okay() { okay(root);}
    void okay( Node* T)
    {
        //diagnostic code will be installed here
        return;
    }
}; // BST

#endif