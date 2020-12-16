#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float f[13];

  // 以下に適切な値を設定する
  f[0] = 72.0;
  f[1] = 101.0;
  f[2] = 108.0;
  f[3] = 108.0;
  f[4] = 111.0;
  f[5] = 44.0;
  f[6] = 87.0;
  f[7] = 111.0;
  f[8] = 114.0;
  f[9] = 108.0;
  f[10] = 100.0;
  f[11] = 10.0;
  // "Hello,World\n" と出力してほしい
  printf("%s", (char*)f);
  return 0;
}
