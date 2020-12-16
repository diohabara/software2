#include <stdio.h>
// ref: https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
const int MAX_FIBO = 1000;
int f[MAX_FIBO] = {0};
int fibo(int n) {
  if (n == 0) return 0;
  if (n == 1 || n == 2) return (f[n] = 1);
  if (f[n]) return f[n];
  int k = (n & 1) ? (n + 1) / 2 : n / 2;
  f[n] = (n & 1) ? (fibo(k) * fibo(k) + fibo(k - 1) * fibo(k - 1))
                 : (2 * fibo(k - 1) + fibo(k)) * fibo(k);
  return f[n];
}

int main(void) {
  for (int i = 0; i <= 10; ++i) printf("%d\n", fibo(i));
  return 0;
}
