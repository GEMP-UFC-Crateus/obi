#include <bits/stdc++.h>
int main() {
  int v, a, b, c; scanf("%d %d %d %d", &v, &a, &b, &c);
  int resp = 0;
  if(v >= a || v >= b || v >= c) resp = 1;
  if(v >= (a + b) || v >= (a + c) || v >= (b + c)) resp = 2;
  if(v >= (a + b + c)) resp = 3;
  printf("%d\n", resp);
}