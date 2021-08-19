//
//

#include "library1.h"

SHARED1_EXPORT Base* makeOne()
{
  return new One();
}

void One::moo() const {
  printf("moo\n");
}
