#include <windows.h>
#include <stdio.h>

void print_arguments(int argc, char **argv) {
  int i;
  for (i = 0; i < argc, i++) {
    printf("argv[%d]: %s", i, argv[i]);
  }
}

int main (int argc, char **argv) {
  Beep(1000, 500);
  print_arguments(argc, argv);
  Beep(500, 500);

  system("PAUSE");
  return 0;
}
