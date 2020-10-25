#include "node.hpp"

static unsigned long long SIZE = 0;

node::node()
{
    head = nullptr;
    tail = nullptr;
    next = nullptr;
    data = -1;
}
// add values
void node::push_back (const int &value)
{
    std::shared_ptr<node> temp = std::make_shared<node>();
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
    SIZE++;
}
// return const size
const unsigned long long node::size ()
{
    return SIZE;
}
// return last value
int node::back ()
{
    std::shared_ptr<node> last = std::make_shared<node>();
    last = tail;
    return last->data;
}
// return first value
int node::front ()
{
    std::shared_ptr<node> first = std::make_shared<node>();
    first = head;
    return first->data;
}
// add value at the beginning
void node::push_front (const int &value)
{
    std::shared_ptr<node> temp = std::make_shared<node>();
    temp->data = value;
    temp->next = head;

    head = temp;
    SIZE++;
}
// add to specific index
void node::insert_at (const int& pos, const int& value)
{
    std::shared_ptr<node> prev = std::make_shared<node>();
    std::shared_ptr<node> curr = std::make_shared<node>();
    std::shared_ptr<node> temp = std::make_shared<node>();
    curr = head;
    //
    for (int i = 0; i < pos; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    temp->data = value;
    prev->next  = temp;
    temp->next = curr;

    SIZE++;
}
//
void node::print ()
{
    for (std::shared_ptr<node> it = head; it != nullptr; it = it->next)
    {
        std::cout << it->data << " ";
    }
    std::cout << '\n';
}