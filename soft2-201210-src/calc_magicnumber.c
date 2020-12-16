#include <stdio.h>
#include <string.h>

void print_str_as_float(char* str) {
  for (int i = 0; i < strlen(str); ++i) {
    printf("%f\n", (float)str[i]);
  }
}

int main() {
  char h[100] = "Hello,World\n";
  print_str_as_float(h);
  return 0;
}
