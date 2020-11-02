#ifndef __NODE_H__
#define __NODE_H__
//
#include <cstdint>
#include <iostream>
#include <memory>
//
struct node
{
    std::uint64_t data;
    // has the refrence of the next element
    std::shared_ptr<node> next;
};
// linkedList of integers
class list : node
{
private:
    // first element in the list
    std::shared_ptr<node> head;
    // last element in the list
    std::shared_ptr<node> tail;
    //
public:
    // constructor
    list ();
    // methods
    auto push_back (const int &value) ->void;
    auto back () ->int;
    auto front () ->int;
    auto push_front (const int &value) ->void;
    auto insert_at (const int &pos, const int& value) ->void;
    auto print ()->void;
    auto size ()->const std::uint64_t;
    auto pop_front () ->void;
    auto pop_back () ->void;
    auto empty() ->const bool;
};
#endif // __NODE_H__