#include "node.hpp"

auto main() -> int
{
    node list;
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
        "11- quit\n";
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
                    list.push_back(input);
                }
                std::cout << "the list: ";
                list.print();
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
                list.push_front(val);
                //
                std::cout << "\nthe list: ";
                list.print();
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
                list.push_back(val);
                //
                std::cout << "\nthe list: ";
                list.print();
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
                list.insert_at(pos, val);
                //
                std::cout << "\nthe list: ";
                list.print();
                std::cout << '\n';
                //
                break;
            }
            case 5:
            {
                std::cout << "lastest element: ";
                list.back();
                //
                break;
            }
            case 6:
            {
                std::cout << "fist element: ";
                list.front();
                //
                break;
            }
            case 7:
            {
                std::cout << "size: ";
                std::cout << list.size() << "\n\n";
                //
                break;
            }
            case 8:
            {
                std::cout << "deleting last element...\n";
                list.pop_back();
                //
                std::cout << "\nthe list: ";
                list.print();
                std::cout << '\n';
                //                
                break;
            }
            case 9:
            {
                std::cout << "deleting first element...\n";
                list.pop_front();
                //
                std::cout << "\nthe list: ";
                list.print();
                std::cout << '\n';
                //
                break;
            }
            case 10:
            {
                std::cout << "\nthe list: ";
                list.print();
                std::cout << '\n';
                //
                break;
            }
            case 11:
            {
                std::cout << "quited !\n";
                std::exit(0);
            }
            default:
            {
                std::cout << "wrong choise try again!\n\n";
                break;
            }
        }
    }    
}