#include <iostream>
#include <person.hh>

int main()
{
    person *person1{new person(2, "Miguel", new job("Developer", 15000.f, IT), none)};

    std::cout << person1->GetName() << std::endl;
    std::cout << person1->GetArmsCount() << std::endl;
    std::cout << person1->GetJob() << std::endl;
    std::cout << person1->GetGenderStr() << std::endl;
    delete person1;

    std::cin.get();
    return 0;
}