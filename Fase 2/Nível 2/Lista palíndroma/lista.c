#include <stdio.h>

int main() {
    int n;
    // Lê a quantidade de números da lista.
    scanf("%d", &n);

    // Transforma a string de números separados por espaço em uma lista de inteiros.
    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int i = 0;      // Aponta para o primeiro item da lista.
    int j = n - 1;  // Aponta para o último item da lista.
    int op = 0;     // Contador para identificar quantas operações/transformações serão realizadas na lista.
    int se = v[i];  // Variável para armazenar a soma das posições à esquerda.
    int sd = v[j];  // Variável para armazenar a soma das posições à direita.

    // Loop para realizar as operações até que os ponteiros se cruzem.
    while (i <= j) {
        if (se == sd) {  // Se as somas das partes à esquerda e à direita forem iguais:
            i++;         // Incrementa o ponteiro da esquerda.
            j--;         // Decrementa o ponteiro da direita.
            se = v[i];    // Atualiza a soma da esquerda.
            sd = v[j];    // Atualiza a soma da direita.
        } else if (se < sd) {  // Se a soma à esquerda for menor que a soma à direita:
            i++;             // Incrementa o ponteiro da esquerda.
            se += v[i];      // Adiciona o próximo elemento à soma da esquerda.
            op++;            // Incrementa o contador de operações.
            if (i == j) {    // Se os ponteiros se cruzarem (caso com lista de tamanho ímpar).
                break;
            }
        } else {  // Se a soma à direita for menor que a soma à esquerda:
            j--;   // Decrementa o ponteiro da direita.
            sd += v[j];  // Adiciona o próximo elemento à soma da direita.
            op++;        // Incrementa o contador de operações.
            if (i == j) {  // Se os ponteiros se cruzarem (caso com lista de tamanho ímpar).
                break;
            }
        }
    }

    // Imprime o número de operações/transformações realizadas.
    printf("%d\n", op);

    return 0;
}
