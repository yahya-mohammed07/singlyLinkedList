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
    // printing nodes
    list.push_back(3);
    list.push_back(43);
    list.push_back(455);
    //
    list.pushHead(77);
    //
    std::cout << list.back() << '\n';
    list.printNodes();
    /*
    std::cout << "wanna run again?(y) or (n): ";
    char choise = '\0';
    std::cin >> choise;
    choise == 'y' ? main() : std::printf("end\n");
    */
}