#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // Animal *animal[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     if (i % 2 == 0)
    //             animal[i] = new Cat();
    //     else
    //         animal[i] = new Dog();
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     std::cout << animal[i]->get_type() << " " << std::endl;
    //     animal[i]->makeSound();
    // }
    // for (int i = 0; i < 3; i++)
    //     delete animal[i];
//================================================================================================//
    Dog dog;
    Dog test = dog;
    for(int i = 0; i < 3; i++)
    {
        dog.get_brain()->set_ideas("test dog", i);
        test.get_brain()->set_ideas("test test", i);
    }
    std::cout << "dog: " << dog.get_brain()->get_ideas(0) << std::endl;
    std::cout << "test: " << test.get_brain()->get_ideas(0) << std::endl;
    return (0);
}