#include "./phonebook.hpp"
#include "./contact.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void  PhoneBook::Add(int i)
{
	std::string  str[5];

	first:
	std::cout << "First name: ";
	getline(std::cin, str[0]);
	if (std::cin.eof())
            return;
	if (str[0].empty())
	{
		std::cerr << "Invalid input" << std::endl;
		goto first;
	}
	last:
	std::cout << "Last name: ";
	getline(std::cin, str[1]);
	if (std::cin.eof())
            return;
	if (str[1].empty())
	{
		std::cerr << "Invalid input" << std::endl;
		goto last;
	}
	nickname:
	std::cout << "Nickname: ";
	getline(std::cin, str[2]);
	if (std::cin.eof())
            return;
	if (str[2].empty() )
	{
		std::cerr << "Invalid input" << std::endl;
		goto nickname;
	}
	phonenumber:
	std::cout << "Phone number: ";
	getline(std::cin, str[3]);
	if (std::cin.eof())
            return;
	if (str[3].empty())
	{
		std::cerr << "Invalid input" << std::endl;
		goto phonenumber;
	}
	for(size_t i = 0; i < str[3].length(); i++)
	{
		if (str[3][i] > '9' || str[3][i] < '0')
		{
			std::cerr << "Invalid input" << std::endl;
			goto phonenumber;
		}
	}
	darkest:
	std::cout << "Darkest secret: ";
	getline(std::cin, str[4]);
	if (std::cin.eof())
            return;
	if (str[4].empty())
	{
		std::cerr << "Invalid input" << std::endl;
		goto darkest;
	}
	this->phonebook[i].Contact_Fill(str);
	return;
}

void	PhoneBook::RightAligned(std::string str)
{
	int i = 0;
	int len = str.length();
	while (i < 10 - len)
	{
		std::cout << " ";
		i++;
	}
	std::cout << str;
}

void  PhoneBook::PrintContact(int x)
{
	std::cout << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << '|';
	std::cout << "ID";
	std::cout << '|';
	std::cout << "First name";
	std::cout << '|';
	std::cout << "Last name ";
	std::cout << '|';
	std::cout << " Nickname ";
	std::cout << '|';
	std::cout << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	for (int i = 0; i < x; i++)
	{
		std::string str = this->phonebook[i].Contact_GetFirstName();
		
		std::cout << "|";
		std::cout << i << ".|";
		if (str.size() < 10)
		{
			for (size_t j = 0; j < (10 - str.size()); j++)
				std::cout << ' ';
			std::cout << str;
		}
		else
		{
			int counter = -1;
			while (++counter < 9)
				std::cout << str[counter];
			std::cout << '.';
		}
		str = this->phonebook[i].Contact_GetLastName();
		std::cout << '|';
		if (str.size() < 10)
		{
			for (size_t j = 0; j < (10 - str.size()); j++)
				std::cout << ' ';
			std::cout << str;
		}
		else
		{
			int counter = -1;
			while (++counter < 9)
				std::cout << str[counter];
			std::cout << '.';
		}
		str = this->phonebook[i].Contact_GetNickname();
		std::cout << '|';
		if (str.size() < 10)
		{
			for (size_t j = 0; j < (10 - str.size()); j++)
				std::cout << ' ';
			std::cout << str;
		}
		else
		{
			int counter = -1;
			while (++counter < 9)
				std::cout << str[counter];
			std::cout << '.';
		}
		std::cout << '|';
		std::cout << std::endl;
		std::cout << "--------------------------------------";
		std::cout << std::endl;
	}
}

void  PhoneBook::Search(int id)
{
	std::cout << "Contact ID: " << id << std::endl;
	std::cout << "First name: " << this->phonebook[id].Contact_GetFirstName() << std::endl;
	std::cout << "Last name: " << this->phonebook[id].Contact_GetLastName() << std::endl;
	std::cout << "Nickname: " << this->phonebook[id].Contact_GetNickname() << std::endl;
	std::cout << "Phone number: " << this->phonebook[id].Contact_GetPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->phonebook[id].Contact_GetDarkestSecret() << std::endl;
}