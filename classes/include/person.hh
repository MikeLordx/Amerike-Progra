#pragma once
#include <string>
#include "Gender.hh"

class person
{
private:
    unsigned int armsCount;
    std::string name;
    std::string job;
    unsigned int sex{};
    Gender gender{};

public:
    person(unsigned int armsCount, std::string name, std::string job, Gender gender);
    ~person();

    unsigned int GetArmsCount() const; //read only
    std::string GetName() const;
    std::string GetJob() const;
    Gender GetGender() const;
    const char *GetGenderStr() const;
};
