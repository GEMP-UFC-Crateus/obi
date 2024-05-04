#include <stdio.h>

void funcao(int n) {
    int i, a = 1, b = 1, c;
    int seq[n];
    
    if (n >= 1) {
        seq[0] = a;
    }
    if (n >= 2) {
        seq[1] = b;
    }
    
    for (i = 2; i < n; i++) {
        c = a + b;
        seq[i] = c;
        a = b;
        b = c;
    }
    
    for (i = n - 1; i >= 1; i--) {
        printf("%d ", seq[i]);
    }
    
    printf("%d\n", seq[0]);
}

int main() {
    int n;
    scanf("%d", &n);
    
    funcao(n);
    
    return 0;
}