#include "person.hh"
#include <iostream>

person::person(unsigned int armsCount, std::string name, job *job, Gender gender)
{
    this->armsCount = armsCount;
    this->name = name;
    this->job = job;
    this->gender = gender;
}

person::~person()
{
    std::cout << "Person deleted" << std::endl;
}

unsigned int person::GetArmsCount() const
{
    return armsCount;
}
std::string person::GetName() const
{
    return name;
}
job person::GetJob() const
{
    return job;
}
Gender person::GetGender() const
{
    return gender;
}

const char *person::GetGenderStr() const
{
    return gender == 0 ? "Male" : gender == 1 ? "Female"
                                              : "None";
}
