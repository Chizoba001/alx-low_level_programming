#include <stdio.h>

void print_chessboard(int n)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((i + j) % 2 == 0) {
        putchar('*');
      } else {
        putchar(' ');
      }
    }
    putchar('\n');
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  print_chessboard(n);
  return 0;
}
