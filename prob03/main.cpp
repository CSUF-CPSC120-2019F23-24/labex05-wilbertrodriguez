// Random Rectangle

#include <iostream>
#include <cstdlib>
#include <ctime>
//Added header files to obtain some outside files

int main()
{
  const int maxh = 40;
  //sets constant values
  int length;

  unsigned tooth = time(0);
  srand(tooth);
  //sets time to get a random value

  length = rand() % maxh + 1;
  //generate random number

  std::string rect;
  rect.assign(length,'#');
  //creates as many number characters as needed

  std::cout << rect << "\n";
  std::cout << rect << "\n";
  std::cout << rect << "\n";
  //outputs the rectangle


  return 0;
}
