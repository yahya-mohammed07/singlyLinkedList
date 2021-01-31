#include "include/node.hpp"
//
list::list()
 : head(nullptr), tail(nullptr)
{
    SIZE = {0};
}
// add values
auto list::push_back(const int &value) ->void
{
    std::shared_ptr<_Node> temp = std::make_shared<_Node>(); // |0-null|
    temp->data = value;
    temp->next = nullptr;
    //
    if (is_empty())
    {
        head = temp; // head->|0-null|
        tail = temp; // tail->|0-null|
    }
    else
    {                          //& of new temp
        tail->next = temp; // head->|0-0x55|->|1-0x66|->tail->|2-0x77|
        tail = temp; //
    }
    //
    ++SIZE;
}
// return const size
auto list::size()->size_t
{
    return SIZE;
}
// return last value
auto list::back()->long long
{
    return tail->data;
}
// return first value
auto list::front()->long long
{
    return head->data;
}
// add value at the beginning
auto list::push_front(const int &value)->void
{
    std::shared_ptr<_Node> temp = std::make_shared<_Node>();
    temp->data = value;
    temp->next = head; // |9-0x83|->head->|0-0x55|
    // head->|9-0x83|->|0-0x55|
    head = temp;
    //
    ++SIZE;
}
// add to specific index
auto list::insert_at(const int &pos, const int& value)->void
{
    if (!is_empty())
    {
        std::shared_ptr<_Node> prev = std::make_shared<_Node>();
        std::shared_ptr<_Node> curr = head;
        std::shared_ptr<_Node> temp = std::make_shared<_Node>();
        //
        for (long i = 0; i < pos; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        temp->data = value;
        prev->next = temp;
        temp->next = curr;
        //
        ++SIZE;
    }
    else
    {
        std::clog << "--list is empty...-\n";
    }
}
//  delete element head
auto list::pop_front()->void
{
    if (!is_empty())
    {
        std::shared_ptr<_Node> temp = head;
        head = temp->next;

        temp.reset();
        //
        --SIZE;
    }
    else
    {
        std::cerr << "\n--Falied to delete list is empty!--" << '\n';
    }
}
// delete element tail
auto list::pop_back()->void
{
    if (!is_empty())
    {
        std::shared_ptr<_Node> cur = head;
        while (cur->next !=  nullptr)
        {
            tail = cur;
            cur = cur->next;
        }
        tail->next = nullptr;
        //
        --SIZE;
    }
    else
    {
        std::cerr << "\n--Failed to delete! the list is empty--" << '\n';
    }
}
// deletes all elements
auto list::pop_all()->void
{
    if (!is_empty())
    {
        std::shared_ptr<_Node> begin = head;
        std::shared_ptr<_Node> ahead;

        while (begin->next != nullptr)
        {
            ahead = begin->next;
            begin.reset();
            begin = ahead;
        }
        head.reset();
        tail.reset();
        //
        SIZE = 0;
    }
    else
    {
        std::clog << "--list is empty\n";
    }
}
// checks if the list is empty
auto list::is_empty()->bool
{
    return head == nullptr ? true : false;
}
// prints list
auto list::print()->void
{
    if (!is_empty())
    {
        std::shared_ptr<_Node> it;
        for (it = head; it != nullptr; it = it->next)
        {
            std::cout << it->data << " ";
        }
        std::cout << '\n';
    }
    else
    {
        std::clog << "--list is empty!\n";
    }
}
//
auto list::at(const int pos)->int64_t
{
    if (!is_empty() && pos>=0)
    {
        std::shared_ptr<_Node> it = head;
        for (int64_t i = 0; i < pos; ++i)
        {
            it = it->next;
        }
        return it->data;
    }
    return -1;
}