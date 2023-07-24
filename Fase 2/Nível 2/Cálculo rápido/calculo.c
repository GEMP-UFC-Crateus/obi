#include <stdio.h>

// Função que calcula a soma dos dígitos de um número "i".
int soma_dig(int i) {
    int soma = i % 10;
    while (i > 1) {
        i /= 10;
        soma += (i % 10);
    }
    return soma;
}

int main() {
    // Entrada de dados do usuário
    int s, a, b;
    scanf("%d", &s);  // Valor referente à soma dos dígitos (S)
    scanf("%d", &a);  // Valor do limite inferior do intervalo (A)
    scanf("%d", &b);  // Valor do limite superior do intervalo (B)

    // Variável para contar quantas vezes o número no intervalo A - B tem soma igual a S.
    int count = 0;

    // Loop para iterar por todos os números no intervalo de A a B (incluindo A e B)
    for (int i = a; i <= b; i++) {
        // Verifica se a soma dos dígitos do número atual (i) é igual a S (usando a função soma_dig).
        if (soma_dig(i) == s) {
            // Se for igual, incrementa o contador.
            count++;
        }
    }

    // Exibe a quantidade de valores no intervalo de A a B em que a soma dos dígitos é igual a S.
    printf("%d\n", count);

    return 0;
}
