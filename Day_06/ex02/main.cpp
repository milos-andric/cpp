# include <iostream>

class Base
{
public:
    virtual ~Base() {};
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

int randomizer(int modulo)
{
    static int i;
    int num;

    i += time(NULL) % 91;
    srand(time(NULL) + i);
    num = rand() % modulo;
    return(num);
}

Base * generate(void)
{
    int num = randomizer(3);

    if (num == 0)
    {
        std::cout << "sending A" << std::endl;
        return(new A);
    }
    else if (num == 1)
    {
        std::cout << "sending B" << std::endl;
        return(new B);
    }
    else
    {
        std::cout << "sending C" << std::endl;
        return(new C);
    }
}

void identify_from_pointer(Base * p)
{
    try
    {
        A&  ptr = dynamic_cast<A&>(*p);
        (void)ptr;
        std::cout << "finding A" << std::endl;
    }
    catch(const std::exception& e)
    {}

    try
    {
        B&  ptr = dynamic_cast<B&>(*p);
        (void)ptr;
        std::cout << "finding B" << std::endl;
    }
    catch(const std::exception& e)
    {}

    try
    {
        C&  ptr = dynamic_cast<C&>(*p);
        (void)ptr;
        std::cout << "finding C" << std::endl;
    }
    catch(const std::exception& e)
    {}
}

int main(void)
{
    Base * ptr;

    ptr = generate();
    identify_from_pointer(ptr);

    return(0);
}
