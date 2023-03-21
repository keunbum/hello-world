/*
 * ref:
     - https://man7.org/linux/man-pages/man3/stdarg.3.html
     - https://www.cplusplus.com/reference/cstdarg/
 *
 */
#include <stdio.h>
#include <stdarg.h>

int sum(int argc, ...) {
  va_list a;
  va_start(a, argc);
  int ret = 0;
  for (int i = 0; i < argc; i++) {
    ret += va_arg(a, int);
  }
  va_end(a);
  return ret;
}

int main(int argc, char *argv[]) {
  printf("%d\n", sum(2, 2, 3));
  printf("%d\n", sum(7, 5, 6, 7, 8, 9, 10, 11));
  return 0;
}
