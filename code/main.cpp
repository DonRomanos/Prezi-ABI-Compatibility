
#include "libone.hpp"

#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "Lets call something" << std::endl;

    std::cout << tell_me_your_name() << std::endl;

    auto interface = give_me_an_interface();
    interface->do_something();

    auto in = std::vector<int>{ 1,2,3,5 };
    auto x = find(in, 2);

    std::cout << "Done " << *x << std::endl;
}