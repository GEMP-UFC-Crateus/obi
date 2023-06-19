#include <bits/stdc++.h>
int main() {
  int n; scanf("%d", &n);
  char vencedor[15];
  int maxv = -1;
  for(int i = 0; i < n; i++) {
    char nome[15];
    int v;
    scanf(" %s %d", nome, &v);
    if(v > maxv) {
      maxv = v;
      strcpy(vencedor, nome);
    }
  }
  printf("%s\n%d\n", vencedor, maxv);
}