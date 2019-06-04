#include <iostream>
#include "student.h"

int main(int argc, char* argv[])
{
  Student student("Léo",false);

  if( student.name() != "Léo" ){
      return EXIT_FAILURE;
  }

  if( student.present() != false ){
      return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
