#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{

	public:
		Character(std::string const & name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(Enemy* target);
		std::string const 	getName() const;
		AWeapon *			getWeapon() const;
		int					getAP() const;

	private:
		Character();

		std::string _name;
		int 		_ap;
		AWeapon *	_weapon;

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */