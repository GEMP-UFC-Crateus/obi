#include <stdio.h>
#include <stdlib.h>

int main() {
    int amigos[4];

    // Lê os níveis de jogo dos quatro amigos
    for (int i = 0; i < 4; i++) {
        scanf("%d", &amigos[i]);
    }

    // Ordena a lista em ordem crescente
    for (int i = 0; i < 4 - 1; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {
            if (amigos[j] > amigos[j + 1]) {
                int temp = amigos[j];
                amigos[j] = amigos[j + 1];
                amigos[j + 1] = temp;
            }
        }
    }

    // Faz a diferença entre os níveis, gerando sempre um valor absoluto (positivo)
    int min_diff = abs((amigos[0] + amigos[3]) - (amigos[1] + amigos[2]));
    printf("%d\n", min_diff);

    return 0;
}
