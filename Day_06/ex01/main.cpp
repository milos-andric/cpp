# include <ctime>
# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <string>

struct s_data {
  char      str1[8];
  int      	num;
  char      str2[8];
};

class Data
{
public:
    Data() {};
    ~Data() {};
	void print(void)
	{
		std::cout << _s1 << std::endl << _num << std::endl << _s2 << std::endl;
	};
    std::string    _s1;
    std::string    _s2;
    int     _num;
};

int randomizer(int modulo)
{
    static int i;
    int num;

    i += time(NULL) % 91;
    srand(time(NULL) + i);
    num = rand() % modulo;
    return(num);
}

std::string rand_string(int len)
{
    std::string list = "agh67OPBijklmnAQW234JKL?!89,.:;bcZX01qrst5NMpYUIeSDHuvwxydCFoGVzERTf"; //68

    std::string str;

    for(int i = 0; i < len; i++)
        str += list[randomizer(68)];
    return(str);
}

void * serialize(void)
{
    s_data *ret = new s_data;
    char * s1 = &((rand_string(8))[0]);
    char * s2 = &((rand_string(8))[0]);
    int  num  = randomizer(20000);

    strncpy(ret->str1, s1, 8);
	strncpy(ret->str2, s2, 8);
    ret->num = num;

    std::cout << "s1 : " << s1 << std::endl;
    std::cout << "num : " << num << std::endl;
    std::cout << "s2 : " << s2 << std::endl;

    return(ret);
}

Data * deserialize(void * raw)
{
    Data *ret = new Data();
	char * c = reinterpret_cast<char *>(raw);

	ret->_s1 = std::string(c, 8);
	ret->_num = *reinterpret_cast<int*>(c + 8);
	ret->_s2 = std::string(c + 12, 8);
    return (ret);
}


int main(void)
{
    void * ptr;
	Data * ret;

    ptr = serialize();
	ret = deserialize(ptr);

	ret->print();

    return(0);
}
