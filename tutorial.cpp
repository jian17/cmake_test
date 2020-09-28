#include <TutorialConfig.h>

#include <iostream>
#include <vector>

#ifdef USE_MYMATH
  #include "MathFunctions/mysqrt.h"
#endif

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
  for (auto it = version.begin(); it != version.end(); ++it)
    {
    std::cout << *it;
    if (it != version.end() - 1)
      std::cout << ".";
    }

  int i;
  std::cout << std::endl;
  std::cout << "Square root input: ";
  std::cin >> i;
  std::cout << "Square root of " << i <<  " is " << tutorial_sqrt(4) << std::endl;

  return 0;
  }