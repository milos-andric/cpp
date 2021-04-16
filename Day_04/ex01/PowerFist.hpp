#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

	public:

		PowerFist();
		PowerFist( PowerFist const & src );
		~PowerFist();

		void	attack(void) const;
		PowerFist &		operator=( PowerFist const & rhs );

	private:

};

// std::ostream &			operator<<( std::ostream & o, PowerFist const & i );

#endif /* ******************************************************* POWERFIST_H */