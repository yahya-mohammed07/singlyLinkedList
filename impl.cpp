#include "node.hpp"
//
static std::uint64_t SIZE = 0;
//
node::node()
{
    head = nullptr;
    tail = nullptr;
    next = nullptr;
    data = -1;
}
// add values
auto node::push_back (const int &value) ->void
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
    //
    SIZE++;
}
// return const size
auto node::size ()  ->const std::uint64_t
{
    return SIZE;
}
// return last value
auto node::back () ->int
{
    std::shared_ptr<node> last = tail;
    return last->data;
}
// return first value
auto node::front () ->int
{
    std::shared_ptr<node> first = head;
    return first->data;
}
// add value at the beginning
auto node::push_front (const int &value) ->void
{
    std::shared_ptr<node> temp = std::make_shared<node>();
    temp->data = value;
    temp->next = head;

    head = temp;
    //
    SIZE++;
}
// add to specific index
auto node::insert_at (const int &pos, const int& value) ->void
{
    if (head != nullptr)
    {
        std::shared_ptr<node> prev = std::make_shared<node>();
        std::shared_ptr<node> curr = head;
        std::shared_ptr<node> temp = std::make_shared<node>();
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
        std::cout << "\n-list is empty or pos is empty-\n";
    }
}
//  delete element head
auto node::pop_front() ->void
{
    if (head != nullptr)
    {
        std::shared_ptr<node> temp = std::make_shared<node>();
        temp = head;
        head = temp->next;

        temp.reset();
        //
        SIZE--;
    }
    else if (head == nullptr)
    {
        std::cout << "\n--falied to delete list is empty!--" << '\n';
    }
}
// delete element tail
auto node::pop_back () ->void
{
    if (head != nullptr)
    {
        std::shared_ptr<node> cur = head;
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
        std::cout << "\n--failed to delete! the list is empty--" << '\n';
    }
}
// checks if the list is empty
auto node::empty() ->const bool
{
    if (SIZE == 0) return true;
    else return false;
}
// prints list
auto node::print () ->void
{
    if (head != nullptr)
    {
        for (std::shared_ptr<node> it = head; it != nullptr; it = it->next)
        {
            std::cout << it->data << " ";
        }
        std::cout << '\n';
    }
    else
    {
        std::cout << " list is empty!\n";
    }

}