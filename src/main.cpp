//
//
#include "library1.h"
#include <memory>

int main(int, char**) {

  std::shared_ptr<Base> local = std::make_shared<One>();
  std::shared_ptr<Base> shared = std::shared_ptr<Base>(makeOne());

  local->foo();
  shared->foo();

  printf("%08x\n", &typeid(local.get()));
  printf("%08x\n", &typeid(shared.get()));

  return 0;
}