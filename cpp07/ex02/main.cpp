#include "Array.hpp"

#define SIZE 500

int main(int, char**)
{
    Array<int> a(SIZE);
    int *b = new int[SIZE];
    srand(time(NULL));
    for (size_t i = 0; i < SIZE; i++)
    {
        const int value = rand() % 100;
        a[i] = value;
        b[i] = value;
    }
    {
        Array<int> test = a;
        Array<int> test2(test);
    }
    for (size_t i = 0; i < SIZE; i++)
    {
        std::cout << a[i] << std::endl;
        std::cout << b[i] << std::endl;
        if (a[i] != b[i])
        {
            std::cerr << "Error: a[" << i << "] != b[" << i << "]" << std::endl;
            delete[] b;
            return 1;
        }
    }
    try
    {
        a[SIZE] = 0;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try
    {
        a[-1] = 0;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    delete[] b;
    return 0;
}