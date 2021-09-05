#include "job.hh"

job::job()
{
    this->name = name;
    this->salary = salary;
    this->jobArea = jobArea;
}

job::~job()
{
}

const char *job::GetName() const
{
    return name;
}
float job::GetSalary() const
{
    return salary;
}
JobArea job::GetJobArea() const
{
    return jobArea;
}
const char *job::GetJobAreaStr() const
{
    return jobArea == IT ? "IT" : jobArea == HR   ? "HR"
                              : jobArea == Sales  ? "Sales"
                              : jobArea == Design ? "Design"
                                                  : "Media";
}
