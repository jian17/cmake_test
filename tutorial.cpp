#include <TutorialConfig.h>

#include <iostream>
#include <vector>

#ifdef USE_MYMATH
  #include "MathFunctions/mysqrt.h"
#endif

#include "myfib.h"

int tutorial_sqrt(int i)
  {
#ifdef USE_MYMATH
  return mysqrt(i);
#else
  return std::sqrt(i);
#endif
  }

int main()
  {
  std::vector<int> version = { VERSION_MAJOR, VERSION_MINOR, VERSION_BUGFIX, VERSION_BUILD };
  std::cout << "Application Version: " << version.front();
  for (auto it = version.begin() + 1; it != version.end(); ++it)
    std::cout << "." << *it;

  int input;
  std::cout << std::endl;
  /*std::cout << "Square root input: ";
  std::cin >> input;
  std::cout << "Square root of " << input <<  " is " << tutorial_sqrt(input) << std::endl;*/

  std::cout << "Fibonacci input: ";
  std::cin >> input;
  std::cout << "Fibonacci series: ";
  for (auto i = 0; i < input; ++i)
    std::cout << myfib(i) << " ";

  return 0;
  }