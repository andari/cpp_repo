#include <iostream>

int main()
{
    std::cout << "Hello World I'm learning cpp" << std::endl;
    std::cout << "Scope: EXODUS" << std::endl;

    int array[10];

    for (int i=0;i<8;i++)
    {
        array[i] = 1000 + i;
    }

    for (int i=0;i<9;i++)
    {
        std::cout << array[i] << std::endl;
    }
}