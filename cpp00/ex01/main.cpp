#include <iostream>
#include "./phonebook.hpp"
#include "./contact.hpp"

int main(void)
{
    int i = 0;
    std::string     str;
    PhoneBook       phonebook;
    int x = 0;
    while (1)
    {
        starT:
        std::cout << "Please enter a command" << std::endl;
        std::cout << "ADD, SEARCH, EXIT" << std::endl;
        getline(std::cin, str);
        if (std::cin.eof())
            break;
        else if (str != "ADD" && str != "SEARCH" && str != "EXIT")
        {
            std::cerr << "Invalid command" << std::endl;
            continue;
        }
        else if (str == "ADD")
        {
            phonebook.Add(x);
            if (i < 8)
                i++;
            x++;
            if (x > 7)
                x = (x - 1) % 7;
        }
        else if (str == "SEARCH")
        {
            if (x == 0)
            {
                std::cerr << "No contacts" << std::endl;
                continue;
            }
            enterid:
            phonebook.PrintContact(i);
            std::cout << "Please enter an ID" << std::endl;
            std::cout << "To go back 'b' " << std::endl;
            std::string id_;
            int id;
            getline(std::cin, id_);
            if (std::cin.eof())
                break;
            if (id_ == "b" || id_ == "B")
                goto starT;
            if (id_.length() > 1 || !id_.length() || \
                (id_.length() == 1 && !isdigit(id_[0])))
            {
                std::cerr << "out of range" << std::endl;
                goto enterid;
            }
            id = std::atoi(id_.c_str());
            if (id < 0 || id > 7)
            {
                std::cerr << "out of range" << std::endl;
                goto enterid;
            }
            else if (id > x - 1)
            {   
                std::cerr << "not in contact" << std::endl;
                goto enterid;
            }
            else
            {
            std::cout << "========================================" << std::endl;
            phonebook.Search(id);}
            std::cout << "========================================" << std::endl;
            std::cout << "do you want to search for another contact?" << std::endl;
            std::cout << "y/n" << std::endl;
            std::string yn;
            getline(std::cin, yn);
            if (std::cin.eof())
                break;
            if (yn == "y")
                goto enterid;
            else if (yn == "n")
                goto starT;
            else
            {
                std::cerr << "Invalid command" << std::endl;
                goto starT;
            }
            std::cin.ignore(100, '\n');
            }
        else if (str == "EXIT")
            break;
    }
}