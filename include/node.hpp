#ifndef INCLUDE_NODE_HPP_
#define INCLUDE_NODE_HPP_
//
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
    // to store the size of the list
    size_t SIZE;
    //
public:
    // constructor
    list();
    // methods
    auto push_back(const int &value)->void;
    auto back()->int;
    auto front()->int;
    auto push_front(const int &value)->void;
    auto insert_at(const int &pos, const int& value)->void;
    auto print()->void;
    auto size()-> size_t;
    auto pop_front()->void;
    auto pop_back()->void;
    auto pop_all()->void;
    auto is_empty()->bool;
};
#endif // INCLUDE_NODE_HPP_