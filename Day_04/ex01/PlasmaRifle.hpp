#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

# include <iostream>
# include <string>

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle();
		PlasmaRifle( PlasmaRifle const & src );
		~PlasmaRifle();

		PlasmaRifle &		operator=( PlasmaRifle const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i );

#endif /* ***************************************************** PLASMARIFLE_H */