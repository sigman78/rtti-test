//
//

#pragma once

#include "common_export.h"
#include <stdio.h>

// all inline, exported
struct COMMON_EXPORT Base {
    virtual ~Base() {}
    virtual void foo() const { printf("Base\n"); }
};

