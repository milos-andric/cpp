#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>

class PowerFist
{

	public:

		PowerFist();
		PowerFist( PowerFist const & src );
		~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, PowerFist const & i );

#endif /* ******************************************************* POWERFIST_H */