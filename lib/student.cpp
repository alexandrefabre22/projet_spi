/**
 *@file student.cpp
 */

#include "student.h"

Student::Student(std::string name, bool present): m_name(name), m_present(present)
{

}


/**
 * This methods returns the name of a student
 */

std::string Student::name() const
{
    return m_name;
}

/**
 * This methods taks a string to set the name of a student
 */

void Student::setName(const std::string &name)
{
    m_name = name;
}


/**
 * This methods returns if a student is presents or not
 */

bool Student::present() const
{
    return m_present;
}

/**
 * This methods sets with a booleen ,the presence of a student.
 */
void Student::setPresent(bool present)
{
    m_present = present;
}

/**
 * This methods prints the name of the  present student.
 */

std::string Student::print() const
{
    std::string out = name() + " " + (present()?"true":"false");
    return out;
}

/**
 * This methods counts the number of present student.
 */
int Student::nb_presents(const std::vector<Student> &students)
{
    int n = 0;
    for(int i=1;i<students.size();i++)
        if(students.at(i).present())
            n++;
    return n;
}
