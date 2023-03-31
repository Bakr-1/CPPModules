
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();


    std::cout << dog->get_type() << " " << std::endl;
    dog->makeSound();//will output the Dog sound!
    std::cout << cat->get_type() << " " << std::endl;
    cat->makeSound(); //will output the cat sound!
    std::cout << animal->get_type() << " " << std::endl;
    animal->makeSound();//will output animal sound

    // const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wc->get_type() << " " << std::endl;
    wc->makeSound();

    delete animal;
    delete dog;
    delete cat;
    delete wc;

    return 0;
}