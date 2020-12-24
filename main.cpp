#include "node.hpp"

auto main() -> int
{
    list myList;
    //
    while (true)
    {
        std::cout << 
        "\n1- create node(s): \n"
        "2- add node to front\n"
        "3- add node to back\n"
        "4- insert node at certain position\n"
        "5- get last element\n"
        "6- get first elemetn\n"
        "7- get size\n"
        "8- delete last element\n"
        "9- delete fist element\n"
        "10- print list\n"
        "11- cehck if the list is empty\n"
        "12- empty the list\n"
        "13- quit\n";
        //
        std::cout << "\n\nmy choise: ";
        int choise = 0;
        std::cin >> choise;
        //
        switch (choise) 
        {
            case 1:
            {
                std::cout << "\nhow many node u wanna add?: ";
                int limit = 0;
                std::cin >> limit;
                std::cout << "add nodes: ";
                for (int i = 0, input = 0; i < limit; i++)
                {
                    std::cin >> input;
                    myList.push_back(input);
                }
                std::cout << "the list: ";
                myList.print();
                std::cout << '\n';
                //
                break;
            }
            case 2:
            {
                std::cout << "give a value to add it to front: ";
                std::cout << "add this: ";
                int val = 0;
                std::cin >> val;
                myList.push_front(val);
                //
                std::cout << "\nthe list: ";
                myList.print();
                std::cout << '\n';
                //
                break;
            }
            case 3:
            {
                std::cout << "give a value to add it to back: ";
                std::cout << "add this: ";
                int val = 0;
                std::cin >> val;
                myList.push_back(val);
                //
                std::cout << "\nthe list: ";
                myList.print();
                std::cout << '\n';
                //
                break;
            }
            case 4:
            {
                std::cout << "give pos: ";
                int pos = 0;
                std::cin >> pos;
                std::cout << "give value: ";
                int val = 0;
                std::cin >> val;
                myList.insert_at(pos, val);
                //
                std::cout << "\nthe list: ";
                myList.print();
                std::cout << '\n';
                //
                break;
            }
            case 5:
            {
                std::clog << "--checking is list empty ...\n";
                if (!myList.empty())
                {
                    std::cout << "lastest element: ";
                    std::cout << myList.back() << '\n';
                }
                else
                {
                    std::clog << "--list is empty\n";
                }
                //
                break;
            }
            case 6:
            {
                std::clog << "checking is list empty ...\n";
                if (!myList.empty())
                {
                    std::cout << "first element: ";
                    std::cout << myList.front() << '\n';
                }
                else
                {
                    std::clog << "--list is empty\n";
                }
                //
                break;
            }
            case 7:
            {
                std::cout << "size: ";
                std::cout << myList.size() << "\n\n";
                //
                break;
            }
            case 8:
            {
                std::clog << "deleting last element...\n";
                myList.pop_back();
                //
                std::cout << "\nthe list: ";
                myList.print();
                std::cout << '\n';
                //                
                break;
            }
            case 9:
            {
                std::clog << "deleting first element...\n";
                myList.pop_front();
                //
                std::cout << "\nthe list: ";
                myList.print();
                std::cout << '\n';
                //
                break;
            }
            case 10:
            {
                std::cout << "\nthe list: ";
                myList.print();
                std::cout << '\n';
                //
                break;
            }
            case 11:
            {
                if (!myList.empty())
                {
                    std::clog << "--list is not empty\n";
                }
                else
                {
                    std::clog << "--list is empty\n";   
                }
                //
                break;
            }
            case 12:
            {
                std::clog << "deleting all elements...\n";
                myList.pop_all();
                break;
            }
            case 13:
            {
                std::clog << "-quited-\n";
                std::exit(0);
            }
            default:
            {
                std::cerr << "-wrong choise try again->\n\n";
            }
        }
    }    
}