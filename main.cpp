#include "node.hpp"
#include <stdio.h>

auto main() -> int
{
    node list;

    /*std::cout << "how many nodes required?: ";
    int nodes = 0;
    std::cin >> nodes;

    for (int i = 0, input = 0; i < nodes; i++)
    {
        std::cin >> input;
        n.push_back(input);
    }*/
    list.push_back(3);
    list.push_back(43);
    list.push_back(455);
    //
    list.push_front(77);
    //
    std::cout << list.back() << '\n';
    std::cout << list.front() << '\n';
    //
    list.insert_at(3, 1000);

    list.pop_front();
    list.pop_back();

    list.print();
    std::cout << list.size() << '\n';
    std::cout << list.back() << '\n';
    /*
    std::cout << "wanna run again?(y) or (n): ";
    char choise = '\0';
    std::cin >> choise;
    choise == 'y' ? main() : std::printf("end\n");
    */
}