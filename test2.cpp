#include <iostream>
#include "student.h"

#include <vector>
#include <iostream>

int main(int argc, char* argv[])
{
  std::vector<Student> students;
  students.push_back( Student("Maarouf", true) );
  students.push_back( Student("Chahrazed", false) );
  students.push_back( Student("Jonathan", true) );
  students.push_back( Student("Seyfeddine", false) );
  students.push_back( Student("Adrian", true) );
  students.push_back( Student("Gauthier", false) );
  students.push_back( Student("Jean-Baptiste", true) );
  students.push_back( Student("Dimia", false) );
  students.push_back( Student("Hawa", true) );
  students.push_back( Student("Mehdi", false) );
  students.push_back( Student("Caroline", true) );
  students.push_back( Student("Nicolas", false) );
  students.push_back( Student("Khouloud", true) );
  students.push_back( Student("Laure", false) );
  students.push_back( Student("Siddharth", true) );

  int nb_present = Student::nb_presents( students );

  if( nb_present == 8 ){
      return EXIT_SUCCESS;
  }else{
      return EXIT_FAILURE;
  }
}
