#include "myfib.h"

int myfib(int i)
  {
  if (i == 0 || i == 1)
    return 1;

  return myfib(i - 1) + myfib(i - 2);
  }