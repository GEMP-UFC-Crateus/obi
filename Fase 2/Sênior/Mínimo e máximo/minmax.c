#include <stdio.h>

// Função que calcula a soma dos dígitos de um número "i".
int soma_dig(int i) {
    int soma = i % 10;
    while (i > 1) {
        i /= 10;
        soma += i % 10;
    }
    return soma;
}

int main() {
    int s, a, b;
    // Lê três valores do usuário: s (valor da soma dos dígitos), a (limite inferior) e b (limite superior).
    scanf("%d", &s);
    scanf("%d", &a);
    scanf("%d", &b);

    // Inicializa as variáveis maior e menor com -1.
    int maior = -1;
    int menor = -1;

    // Loop para iterar por todos os números no intervalo de a a b (inclusive).
    for (int i = a; i <= b; i++) {
        // Verifica se a soma dos dígitos do número atual (i) é igual a s (usando a função soma_dig).
        if (soma_dig(i) == s) {
            // Se a soma dos dígitos for igual a s, atualiza o valor da variável maior para i.
            maior = i;
            // Se a variável menor ainda tiver o valor inicial de -1, atualiza-a também para i.
            // Isso garante que a variável menor armazenará o primeiro valor encontrado com a soma dos dígitos igual a s.
            if (menor == -1) {
                menor = i;
            }
        }
    }

    // Imprime o menor valor encontrado com a soma dos dígitos igual a s.
    printf("%d\n", menor);
    // Imprime o maior valor encontrado com a soma dos dígitos igual a s.
    printf("%d\n", maior);

    return 0;
}
