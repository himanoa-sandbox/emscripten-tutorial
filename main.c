#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int sayHi() {
  printf("Hi!");
  return 1;
}
