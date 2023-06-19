#include <bits/stdc++.h>
const int MAXN = 100010;
int sa[MAXN], sb[MAXN];
int main() {
  int a, b; scanf("%d %d", &a, &b);
  for(int i = 0; i < a; i++) scanf("%d", &sa[i]);
  for(int i = 0; i < b; i++) scanf("%d", &sb[i]);
  int aux = 0;
  for(int i = 0; i < a; i++)
    if(aux < b && sa[i] == sb[aux])
      aux++;
  if(aux == b) printf("S\n");
  else printf("N\n");
}
