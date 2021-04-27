
#pragma once

template<class T>
class Array {

public:

	Array(){
		this->_array = new T[0];
		this->_size = 0;
	}

	Array(unsigned int const len){
		this->_array = new T[len]();
		this->_size = len;
	}

	Array(const Array& rhs){
		*this = rhs;
	}

	~Array(){
		delete [] this->_array;
	}

	Array &operator=(Array const& rhs){
		this->_size = rhs.size();
		this->_array = new T[this->_size];
		for(unsigned int i = 0; i < _size; i++){
			this->_array[i] = rhs._array[i];
		}
		return(*this);
	}

	T	&operator[](unsigned int i){
		if (i < this->_size)
			return(this->_array[i]);
		throw BadAddress();
	}

	unsigned int size(void) const{
		return(this->_size);
	}

	class BadAddress : public std::exception
	{
		const char * what () const throw ()
			{
				return "bad address";
			}
	};

private:

	T*				_array;
	unsigned int	_size;
};
