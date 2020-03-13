#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int n;
  srand(time(0));
  n = rand() % 11;
  printf("%d\n", n);
  printf("Hello, World!\n");
  return (0);
}
