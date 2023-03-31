#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class	Contacts
{
	public:
		Contacts();
		~Contacts();
		void		Contact_Fill(std::string *str);
		std::string	Contact_GetFirstName();
		std::string	Contact_GetLastName();
		std::string	Contact_GetNickname();
		std::string	Contact_GetPhoneNumber();
		std::string	Contact_GetDarkestSecret();
	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		PhoneNumber;
		std::string		DarkestSecret;
};

#endif