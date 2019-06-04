#include <iostream>
#include "student.h"

#include <vector>
#include <iostream>

int main(int argc, char* argv[])
{
  std::vector<Student> students;
  students.push_back( Student("Maarouf") );
  students.push_back( Student("Chahrazed") );
  students.push_back( Student("Jonathan") );
  students.push_back( Student("Seyfeddine") );
  students.push_back( Student("Adrian") );
  students.push_back( Student("Gauthier") );
  students.push_back( Student("Jean-Baptiste") );
  students.push_back( Student("Dimia") );
  students.push_back( Student("Hawa") );
  students.push_back( Student("Mehdi") );
  students.push_back( Student("Caroline") );
  students.push_back( Student("Nicolas") );
  students.push_back( Student("Khouloud") );
  students.push_back( Student("Laure") );
  students.push_back( Student("Siddharth") );

  int number_of_students = students.size();
  std::cout << "Number of students: " << number_of_students << std::endl;
  for(int i=0; i<=number_of_students;i++){
    std::cout << students.at(i).print() << std::endl;
  }

  return 0;
}
