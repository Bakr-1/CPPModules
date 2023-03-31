#include "Base.hpp"

Base* generate(void)
{
    int random = rand() % 3;
    if (random == 0)
        return new A;
    else if (random == 1)
        return new B;
    else
        return new C;
}

void identify_from_pointer(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Pointing to A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Pointing to B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Pointing to C" << std::endl;
}

void identify_from_reference(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Pointing to A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "Pointing to B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "Pointing to C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    }
}