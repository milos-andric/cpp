#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:
		Enemy(int hp, std::string const & type);
		Enemy( Enemy const & src );
		virtual ~Enemy();

		Enemy &		operator=( Enemy const & rhs );

		std::string virtual getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
		
	protected:
		Enemy();

		int 			_hp;
		std::string		_type;


};

// std::ostream &			operator<<( std::ostream & o, Enemy const & i );

#endif /* *********************************************************** ENEMY_H */