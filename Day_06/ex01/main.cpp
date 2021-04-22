# include <ctime>
# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <string>

struct s_data {
  char[8] str1;
  int num;
  char[8] str2;
}

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
    s_data ret = new s_data;
    char * s1 = &((rand_string(8))[0]);
    char * s2 = &((rand_string(8))[0]);
    int  num  = randomizer(20000);

    ret.str1 = s1;
    ret.num = num;
    ret.str2 = s2;

    // std::cout << "s1 : " << s1 << std::endl;
    // std::cout << "num : " << num << std::endl;
    // std::cout << "s2 : " << s2 << std::endl;

    return(&ret);
}

// Data * deserialize(void * raw);

int main(void)
{

    serialize();

    return(0);
}
