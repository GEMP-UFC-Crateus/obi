#include <bits/stdc++.h>
const int MAXN = 1010;
int mat[MAXN][MAXN];
int main() {
  int s, t; scanf("%d %d", &s, &t);
  for(int i = 1; i <= t; i++) {
    int a, b; scanf("%d %d", &a, &b);
    mat[a][b] = 1;
    mat[b][a] = 1;
  }
  int p; scanf("%d", &p);
  int resp = 0;
  for(int i = 1; i <= p; i++) {
    int n; scanf("%d", &n);
    int ant = -1;
    bool ok = true;
    for(int j = 1; j <= n; j++) {
      int cur; scanf("%d", &cur);
      if(j > 1 && mat[ant][cur] != 1) ok = false;
      ant = cur;
    }
    if(ok) resp++;
  }
  printf("%d\n", resp);
}