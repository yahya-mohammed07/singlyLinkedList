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
    auto push_back (const int &value) -> void;
    auto back () -> int;
    auto front () -> int;
    auto push_front (const int &value) -> void;
    auto insert_at (const int &pos, const int& value) -> void;
    auto print () -> void;
    auto size () -> const unsigned long long;
    auto pop_front () ->void;
    auto pop_back () ->void;
};

#endif // __NODE_H__