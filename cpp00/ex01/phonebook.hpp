#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "./contact.hpp"
// #include <iomanip>
class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    Add(int i);
        void    PrintContact(int x);
        void    Search(int id);
        void	RightAligned(std::string str);

    private:
        Contacts    phonebook[8];
};
#endif