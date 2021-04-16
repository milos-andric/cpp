#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:

		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();

		AWeapon &		operator=( AWeapon const & rhs );

		std::string	virtual	getName(void) const;
		std::string			getSound(void) const;
		int					getAPCost(void) const;
		int					getDamage(void) const;

		virtual void	attack(void) const = 0;
	protected:

		AWeapon();

		std::string		_name;
		std::string		_sound;
		int				_apCost;
		int				_damage;

};

#endif /* ********************************************************* AWEAPON_H */