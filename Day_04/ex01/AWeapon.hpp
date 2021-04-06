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
		int					getAPCost(void) const;
		int					getDamage(void) const;

		virtual void	attack(void) const = 0;
	private:

		AWeapon();

		std::string		_name;
		int				_apCost;
		int				_damage;

};

#endif /* ********************************************************* AWEAPON_H */