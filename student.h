#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student
{
public:
    Student(std::string name, bool present = true);

    std::string name() const;
    void setName(const std::string &name);

    bool present() const;
    void setPresent(bool present);

    std::string print() const;

    static int nb_presents( const std::vector<Student> &students );

private:
    std::string m_name;
    bool m_present = true;
};

#endif // STUDENT_H
