#include <stdio.h>

void _puts_recursion(char *s) {
  if (!s) {
    return;
  }

  _putchar(*s);
  _puts_recursion(s + 1);
}

int main() {
  _puts_recursion("Hello, world!");
  return 0;
}
