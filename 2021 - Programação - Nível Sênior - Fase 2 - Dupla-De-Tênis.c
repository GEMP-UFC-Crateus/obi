#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4;
    int min_diff;

    // lê os níveis de jogo dos quatro amigos
    printf("Digite os níveis de jogo dos quatro amigos: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    // calcula a menor diferença possível entre os níveis dos times formados, abs é o valor absoluto
    int diff1 = abs(n1 + n2 - (n3 + n4));
    int diff2 = abs(n1 + n3 - (n2 + n4));
    int diff3 = abs(n1 + n4 - (n2 + n3));
    min_diff = diff1;
    if (diff2 < min_diff) {
        min_diff = diff2;
    }
    if (diff3 < min_diff) {
        min_diff = diff3;
    }

    // imprime a menor diferença possível
    printf("A menor diferença possível entre os níveis dos times é: %d\n", min_diff);

    return 0;
}