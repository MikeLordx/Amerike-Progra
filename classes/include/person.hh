#pragma once
#include <string>
#include "Gender.hh"
#include "job.hh"

class person
{
private:
    unsigned int armsCount;
    std::string name;
    job job;
    unsigned int sex{};
    Gender gender{};

public:
    person(unsigned int armsCount, std::string name, Job *job, Gender gender);
    ~person();

    unsigned int GetArmsCount() const; //read only
    std::string GetName() const;
    job *GetJob() const;
    Gender GetGender() const;
    const char *GetGenderStr() const;
};
