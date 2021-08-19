//

#pragma once

#include "shared1_export.h"
#include "userclass.h"
#include <stdio.h>

struct SHARED1_EXPORT One: public Base {
  virtual void foo() const { printf("One\n"); }
};

SHARED1_EXPORT Base* makeOne();
