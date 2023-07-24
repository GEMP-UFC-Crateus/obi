#include <stdio.h>

// Função que calcula a média de A e B, seguindo a fórmula 2*A - B
int media(int A, int B) {
    // Calcula o resultado da expressão 2*A - B e atribui o resultado à variável C.
    int C = 2*A - B;
    // Retorna o valor de C como resultado da função.
    return C;
}

/*
    Fórmula matemática equivalente à função 'media':
        (a + b + c) / 3 = b
        a + b + c = 3 * b
        a = 3 * b - b - c
        a = 2 * b - c
*/

int main() {
    int A, B;
    // Lê dois valores inteiros (A e B) separados por espaço do usuário e os atribui a A e B, respectivamente.
    scanf("%d %d", &A, &B);

    // Chama a função media com os valores lidos e imprime o resultado retornado pela função.
    printf("%d\n", media(A, B));

    return 0;
}
