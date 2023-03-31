#include "phonebook.hpp"
#include "contact.hpp"

Contacts::Contacts()
{
}

Contacts::~Contacts()
{
}

void		Contacts::Contact_Fill(std::string *str)
{
	this->FirstName = str[0];
	this->LastName = str[1];
	this->Nickname = str[2];
	this->PhoneNumber = str[3];
	this->DarkestSecret = str[4];
}

std::string	Contacts::Contact_GetFirstName()
{
	return (this->FirstName);
}

std::string    Contacts::Contact_GetLastName()
{
	return (this->LastName);
}

std::string    Contacts::Contact_GetNickname()
{
	return (this->Nickname);
}

std::string    Contacts::Contact_GetPhoneNumber()
{
	return (this->PhoneNumber);
}

std::string    Contacts::Contact_GetDarkestSecret()
{
	return (this->DarkestSecret);
}
