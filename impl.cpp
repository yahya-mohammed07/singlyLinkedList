#include "node.hpp"
//
static std::uint64_t SIZE = 0;
//
list::list()
{
    head = nullptr;
    tail = nullptr;
}
// add values
auto list::push_back(const int &value) ->void
{
    std::shared_ptr<_Node> temp = std::make_shared<_Node>();
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
    //
    SIZE++;
}
// return const size
auto list::size()  ->const std::uint64_t
{
    return SIZE;
}
// return last value
auto list::back() ->int
{
    std::shared_ptr<_Node> last = tail;
    return last->data;
}
// return first value
auto list::front() ->int
{
    std::shared_ptr<_Node> first = head;
    return first->data;
}
// add value at the beginning
auto list::push_front(const int &value) ->void
{
    std::shared_ptr<_Node> temp = std::make_shared<_Node>();
    temp->data = value;
    temp->next = head;

    head = temp;
    //
    SIZE++;
}
// add to specific index
auto list::insert_at(const int &pos, const int& value) ->void
{
    if (head != nullptr)
    {
        std::shared_ptr<_Node> prev = std::make_shared<_Node>();
        std::shared_ptr<_Node> curr = head;
        std::shared_ptr<_Node> temp = std::make_shared<_Node>();
        //
        for (int i = 0; i < pos; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        temp->data = value;
        prev->next = temp;
        temp->next = curr;
        //
        SIZE++;
    }
    else
    {
        std::cerr << "--list is empty or pos is empty-\n";
    }
}
//  delete element head
auto list::pop_front() ->void
{
    if (head != nullptr)
    {
        std::shared_ptr<_Node> temp = head;
        head = temp->next;

        temp.reset();
        //
        SIZE--;
    }
    else if (head == nullptr)
    {
        std::cerr << "\n--falied to delete list is empty!--" << '\n';
    }
}
// delete element tail
auto list::pop_back() ->void
{
    if (head != nullptr)
    {
        std::shared_ptr<_Node> cur = head;
        while (cur->next !=  nullptr)
        {
            tail = cur;
            cur = cur->next;
        }
        tail->next = nullptr;
        //
        SIZE--;
    }
    else if (head == nullptr)
    {
        std::cerr << "\n--failed to delete! the list is empty--" << '\n';
    }
}
// deletes all elements
auto list::pop_all() ->void
{
    if (head != nullptr)
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
        std::cerr << "--list is empty\n";
    }
}
// checks if the list is empty
auto list::empty() ->const bool
{
    if (SIZE == 0) return true;
    else return false;
}
// prints list
auto list::print() ->void
{
    if (head != nullptr)
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
        std::cerr << "--list is empty!\n";
    }
}