#ifndef __NODE_H__
#define __NODE_H__

#include <iostream>

// linkedList of integers
class node
{
private:
    // first element in the list
    node *head;
    // lastest element in the list
    node *tail;
    // has the refrence of the next element
    node *next;
    //
    int data;
public:
    // constructor
    node ();
    // methods
    auto push_back (int value) -> void;
    auto back () -> int;
    auto pushHead (int value) -> void;
    auto insert_at (int pos, int value) -> void;
    auto printNodes () -> void;
    // destructor
    ~node();
};

#endif // __NODE_H__