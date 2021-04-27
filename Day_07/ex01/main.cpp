#include <iostream>
#include "iter.hpp"

void	string_display( std::string const &data )
{
	std::cout << T_N T_GYHID "from main displayer: " T_N T_BB;
	std::cout << data << T_N << std::endl;
}

void	float_display( float const &data )
{
	std::cout << T_N T_GYHID "from main displayer: " T_N T_BB;
	std::cout << data << T_N << std::endl;
}

void	char_display( char const &data )
{
	std::cout << T_N T_GYHID "from main displayer: " T_N T_BB;
	std::cout << data << T_N << std::endl;
}

int		main( void )
{
	// String type
	std::cout << T_GN "Testing string type" T_N << std::endl;
	std::string greetings[3] = {"Hello sunny world!", "Good morning!", "YOOO!"};

	std::cout << T_GYB << "Testing iter, taking a string, with an instantiated function template as a third parameter" T_N << std::endl;
	iter(greetings, 3, print); // Instantiating displayer template, by iter template

	std::cout << T_GYB << "Testing iter, taking a string, with a main function as a third parameter" T_N << std::endl;
	iter(greetings, 3, &string_display); // Instantiating iter template with string_display function
	std::cout << std::endl;

	// Float type
	std::cout << T_GN "Testing float type" T_N << std::endl;
	float floats[6] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

	std::cout << T_GYB << "Testing iter, taking a float, with an instantiated function template as a third parameter" T_N << std::endl;
	iter(floats, 6, print); // Instantiating displayer template, by iter template

	std::cout << T_GYB << "Testing iter, taking a float, with a main function as a third parameter" T_N << std::endl;
	iter(floats, 6, &float_display); // Instantiating iter template with float_display function
	std::cout << std::endl;

	// Char type
	std::cout << T_GN "Testing char type" T_N << std::endl;
	char chars[5] = {'s', 'u', 'n', 'n', 'y'};

	std::cout << T_GYB << "Testing iter, taking a char, with an instantiated function template as a third parameter" T_N << std::endl;
	iter(chars, 5, print); // Instantiating displayer template, by iter template

	std::cout << T_GYB << "Testing iter, taking a char, with a main function as a third parameter" T_N << std::endl;
	iter(chars, 5, &char_display); // Instantiating iter template with char_display function
	std::cout << std::endl;

	return (0);
}
