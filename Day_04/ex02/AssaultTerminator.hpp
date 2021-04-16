#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator();
		AssaultTerminator( AssaultTerminator const & src );
		~AssaultTerminator();
		
		ISpaceMarine* clone() const;
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;
		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, AssaultTerminator const & i );

#endif /* *********************************************** ASSAULTTERMINATOR_H */