#include "node.hpp"

node::node()
{
    head = nullptr;
    tail = nullptr;
    next = nullptr;
    data = -1;
}
// add values
void node::push_back (int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = nullptr;
    //
    if (head == nullptr)
    {
        head = temp;
        tail = temp;
    }
    else 
    {
        tail->next = temp;
        tail = temp;
    }
}
// gives the value of the last element
int node::back()
{
    node *last  = new node;
    last = tail;
    return last->data;

    delete last;
}
// add value at the beginning
void node::pushHead (int value)
{
    node *temp = new node;
    temp->data = value;
    temp->next = head;

    head = temp;
}
//
void node::insert_at (int pos, int value)
{

}
//
void node::printNodes()
{
    for (node *it = head; it != nullptr; it = it->next)
    {
        std::cout << it->data << " ";
    }
    std::cout << '\n';
}
//
node::~node()
{
    node *free = head;
    while (free != nullptr)
    {
        delete free;
        free = free->next;
    }
}