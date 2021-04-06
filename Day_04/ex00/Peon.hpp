#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

# include <iostream>
# include <string>

class Peon : public Victim
{

	public:

		Peon(std::string const name);
		Peon( Peon const & src );
		~Peon();

		Peon &		operator=( Peon const & rhs );

		void		getPolymorphed() const;

	private:

		Peon();
};

// std::ostream &			operator<<( std::ostream & o, Peon const & i );

#endif /* ************************************************************ PEON_H */