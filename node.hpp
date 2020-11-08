#ifndef __NODE_H__
#define __NODE_H__
//
#include <cstdint>
#include <iostream>
#include <memory>
// type node
class _Node
{
public:
    long long data = 0;
    // has the refrence of the next element
    std::shared_ptr<_Node> next = nullptr;
};
// linkedList of integers
class list
{
private:
    // first element in the list
    std::shared_ptr<_Node> head;
    // last element in the list
    std::shared_ptr<_Node> tail;
    //
public:
    // constructor
    list();
    // methods
    auto push_back(const int &value) ->void;
    auto back() ->int;
    auto front() ->int;
    auto push_front(const int &value) ->void;
    auto insert_at(const int &pos, const int& value) ->void;
    auto print()->void;
    auto size()->const long long;
    auto pop_front() ->void;
    auto pop_back() ->void;
    auto pop_all() ->void;
    auto empty() ->const bool;
};
#endif // __NODE_H__