#include "student.h"

Student::Student(std::string name, bool present): m_name(name), m_present(present)
{

}

std::string Student::name() const
{
    return m_name;
}

void Student::setName(const std::string &name)
{
    m_name = name;
}

bool Student::present() const
{
    return m_present;
}

void Student::setPresent(bool present)
{
    m_present = present;
}

std::string Student::print() const
{
    std::string out = name() + " " + (present()?"true":"false");
    return out;
}

int Student::nb_presents(const std::vector<Student> &students)
{
    int n = 0;
    for(int i=1;i<students.size();i++)
        if(students.at(i).present())
            n++;
    return n;
}
