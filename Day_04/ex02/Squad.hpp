#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

typedef struct	s_list
{
	ISpaceMarine * 		unit;
	struct s_list *		next;
}				t_list;

class Squad : public ISquad
{

	public:

		Squad();
		Squad( Squad const & src );
		~Squad();

		int 			getCount() const;
		ISpaceMarine* 	getUnit(int number) const;
		t_list*			getSquad(void) const;
		int push(ISpaceMarine* unit);
		
		Squad &		operator=( const Squad & rhs );

	private:

	t_list	*_squad;

	void	free_list(void);
	void	dup_list(Squad const & squad);
};

// std::ostream &			operator<<( std::ostream & o, Squad const & i );

#endif /* *********************************************************** SQUAD_H */