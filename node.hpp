#ifndef __NODE_H__
#define __NODE_H__

#include <iostream>
#include <memory>

// linkedList of integers
class node
{
private:
    // first element in the list
    std::shared_ptr<node> head;
    // last element in the list
    std::shared_ptr<node> tail;
    // has the refrence of the next element
    std::shared_ptr<node> next;
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
};

#endif // __NODE_H__