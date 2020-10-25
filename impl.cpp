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
}
// gives the value of the last element
int node::back()
{
    std::shared_ptr<node> last = std::make_shared<node>();
    last = tail;
    return last->data;
}
// add value at the beginning
void node::pushHead (int value)
{
    std::shared_ptr<node> temp = std::make_shared<node>();
    temp->data = value;
    temp->next = head;

    head = temp;
}
// add to specific index
void node::insert_at (int pos, int value)
{

}
//
void node::printNodes()
{
    for (std::shared_ptr<node> it = head; it != nullptr; it = it->next)
    {
        std::cout << it->data << " ";
    }
    std::cout << '\n';
}