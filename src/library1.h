//

#pragma once

#include "shared1_export.h"
#include "userclass.h"
#include <stdio.h>

struct SHARED1_EXPORT One: public Base {
  virtual void foo() const { printf("One\n"); }
  // non inline method for lulz
  virtual void moo() const;
};

SHARED1_EXPORT Base* makeOne();
