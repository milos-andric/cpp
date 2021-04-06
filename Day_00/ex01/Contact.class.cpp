#include "Contact.class.hpp"


Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string Contact::get_in(std::string prompt)
{
	std::string line;

	std::cout << prompt << std::endl;
	std::cin.clear();
	std::getline (std::cin, line);
	return(line);
}

std::string	Contact::trunc(std::string line)
{
	if (line.size() >= 10)
	{
		line.resize(10);
		line.replace(9, 1, ".");
	}
	return(line);
}

void		Contact::aff_inf(int index)
{
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << index;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << trunc(first_name);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << trunc(last_name);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << trunc(login);
	std::cout << "|" << std::endl;
}

void		Contact::prompt_cont(void)
{
	first_name = get_in("FIRST NAME ?");
	last_name = get_in("LAST NAME ?");
	nickname = get_in("NICKNAME ?");
	login = get_in("LOGIN ?");
	postal_address = get_in("POSTAL ADDRESS ?");
	email = get_in("EMAIL ?");
	phone = get_in("PHONE ?");
	birthday = get_in("BIRTHDAY ?");
	meal = get_in("FAVORITE MEAL ?");
	underwear_color = get_in("UNDERWEAR COLOR ?");
	darkest_secret = get_in("DARKEST SECRET ?");
}

void		Contact::show_cont(void)
{
	std::cout << "first name : ";
	std::cout << first_name << std::endl;
	std::cout << "last name : ";
	std::cout << last_name << std::endl;
	std::cout << "nickname : ";
	std::cout << nickname << std::endl;
	std::cout << "login : ";
	std::cout << login << std::endl;
	std::cout << "postal address : ";
	std::cout << postal_address << std::endl;
	std::cout << "email : ";
	std::cout << email << std::endl;
	std::cout << "phone : ";
	std::cout << phone << std::endl;
	std::cout << "birthday : ";
	std::cout << birthday << std::endl;
	std::cout << "favourite meal : ";
	std::cout << meal << std::endl;
	std::cout << "underwear color : ";
	std::cout << underwear_color << std::endl;
	std::cout << "darkest secret : ";
	std::cout << darkest_secret << std::endl;

}