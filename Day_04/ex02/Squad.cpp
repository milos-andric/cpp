#include "Squad.hpp"
#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad()
{
	this->_squad = NULL;
}

Squad::Squad( const Squad & src ) : _squad(NULL)
{
	*this = src;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	free_list();
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=(const Squad & rhs)
{
	if ( this != &rhs )
	{
		free_list();
		dup_list(rhs);
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Squad::getCount(void) const
{
	t_list * ptr = this->_squad;
	int i = 0;

	while(ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	//std::cout << i << std::endl;
	return(i);
}

int Squad::push(ISpaceMarine* unit)
{	
	if (unit == NULL)
		return(getCount());
	int i = 0;
	t_list * ptr = this->_squad;

	t_list * link = new t_list;
	
	link->unit = unit;
	link->next = NULL;

	if (ptr == NULL)
		this->_squad = link;
	else
	{
		while(ptr->next !=  NULL)
		{
			if (ptr->unit == unit)
				return(getCount());
			ptr = ptr->next;
			i++;
		}
		ptr->next = link;
	}
	return(getCount());
}

ISpaceMarine* Squad::getUnit(int number) const
{
	t_list * ptr = this->_squad;
	int i = -1;
	if ((number >= 0) && (number < getCount()))
	{
		while((++i < number) && (ptr != NULL))
			ptr = ptr->next;
		return(ptr->unit);
	}
	return(NULL);
}

void	Squad::free_list(void)
{
	t_list *ptr = this->_squad;
	t_list* temp;

	while(ptr != NULL)
	{
		temp = ptr->next;
		delete ptr->unit;
		delete ptr;
		ptr = temp;
	}
	_squad = NULL;
}

void	Squad::dup_list(const Squad & squad)
{
	// t_list* ptr = this->_squad;
	t_list*	nova = squad.getSquad();
	int i = 0;

	while(nova != NULL)
	{
		this->push(nova->unit->clone());
		nova = nova->next;
		std::cout << i  << std::endl;
		i++;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

t_list*		Squad::getSquad(void) const
{
	return(_squad);
}

/* ************************************************************************** */