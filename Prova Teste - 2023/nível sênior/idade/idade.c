#include <stdio.h>

int main() {
    int entrada[3];

    for (int i = 0; i < 3; i++) {
        int idade;
        scanf("%d", &idade);
        if (idade >= 5 && idade <= 100) {
            entrada[i] = idade;
        }
    }
    // Ordenar a entrada em ordem crescente
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (entrada[j] > entrada[j + 1]) {
                int temp = entrada[j];
                entrada[j] = entrada[j + 1];
                entrada[j + 1] = temp;
            }
        }
    }
    // Imprimir o segundo elemento da entrada ordenada
    printf("%d\n", entrada[1]);

    return 0;
}