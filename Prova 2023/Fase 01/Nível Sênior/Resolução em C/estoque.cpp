#include <bits/stdc++.h>
const int MAX = 510;
int mat[MAX][MAX];
int main() {
  int n, m; scanf("%d %d", &n, &m);
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      scanf("%d", &mat[i][j]);
  int p; scanf("%d", &p);
  int resp = 0;
  for(int i = 1; i <= p; i++) {
    int a, b; scanf("%d %d", &a, &b);
    if(mat[a][b] > 0) {
      resp++;
      mat[a][b]--;
    }
  }
  printf("%d\n", resp);
}