#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <cstdlib>

class Contact 
{
    public:
    Contact(void);
	~Contact(void);
	std::string get_in(std::string prompt);
	void		aff_inf(int index);
	void		show_cont(void);
	void		prompt_cont(void);
	std::string	trunc(std::string line);
	
    private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string	postal_address;
	std::string	email;
	std::string phone;
	std::string	birthday;
	std::string meal;
	std::string underwear_color;
	std::string darkest_secret;
};


#endif