#include "libone.hpp"

#include <iostream> 
#include <algorithm>

std::string tell_me_your_name()
{
    return "My name is Slagathor";
}

AnInterface::~AnInterface() = default;

class Concrete : public AnInterface
{
public:
    ~Concrete() noexcept override = default;
    virtual void do_something() override
    {
        std::cout << "doing something" << std::endl;
    }
};

std::unique_ptr<AnInterface> give_me_an_interface()
{
    return std::make_unique<Concrete>();
}

std::vector<int>::const_iterator find(const std::vector<int>& in, int x)
{
    return std::find(in.begin(), in.end(), x);
}