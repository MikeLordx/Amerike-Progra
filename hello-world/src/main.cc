#include <iostream>
#include <myheader.hh>

int numberInteger{0};

int main()
{
    std::cout << numberInteger;
    std::cout << "Hello World!";
    std::cout << "Suma: " << Add("Hello", "World");
    std::cin.get();
    return 0;
}