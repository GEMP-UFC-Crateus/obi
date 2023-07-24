#include <stdio.h>
#include <string.h>

// Função para buscar o anagrama na string s
char* buscar_anagrama(int n, char* s) {
    // Inicializa um vetor freq com 26 posições, referentes às letras do alfabeto, todas com valor 0.
    int freq[26] = {0};

    for (int i = 1; i < n; i++) {
        // Verifica se n não é divisível por i.
        if (n % i != 0) {
            continue;
        }

        // Reseta o vetor freq para 0.
        for (int j = 0; j < 26; j++) {
            freq[j] = 0;
        }

        // Preenche o vetor freq com as frequências das letras no prefixo da string de tamanho i.
        for (int j = 0; j < i; j++) {
            freq[s[j] - 'a'] += 1; // Adiciona 1 na posição da letra
        }

        int certo = 1; // Inicializa uma variável inteira certo como 1 (True)

        // Verifica se há um padrão de repetição do prefixo em s.
        // Inicia um loop que percorrerá a string de i em i posições, buscando um padrão de repetição.
        for (int k = i; k < n; k += i) {
            // Loop para percorrer o trecho do prefixo atual dentro do padrão de repetição.
            for (int j = k; j < k + i; j++) {
                // Verifica se a frequência da letra na posição j é igual a 0. Se for, significa que a letra não está presente no prefixo atual e, portanto, não há padrão de repetição.
                if (freq[s[j] - 'a'] == 0) {
                    certo = 0; // portanto, certo passa a ser 0 (False)
                    break; // E encerramos o Loop
                }
                // Decrementa a frequência da letra na posição j em freq, já que a letra foi encontrada dentro do padrão de repetição.
                freq[s[j] - 'a'] -= 1;
            }

            // Verifica se certo é falso (ou seja, não há padrão de repetição) e, nesse caso, interrompe o loop externo.
            if (!certo) {
                break;
            }

            // Restaura as frequências das letras no prefixo atual, adicionando 1 em cada posição de freq.
            for (int j = 0; j < i; j++) {
                freq[s[j] - 'a'] += 1;
            }
        }

        // Se encontrou um padrão de repetição, retorna o prefixo da string que forma o anagrama.
        if (certo) {
            s[i] = '\0'; // Adiciona o caractere nulo após o prefixo para formar a substring desejada
            return s;
        }
    }

    // Se não encontrou um anagrama, retorna "*".
    return "*";
}

int main() {
    int n;
    // Lê o tamanho da string.
    scanf("%d", &n);

    char s[1000000];
    // Lê a string.
    scanf("%s", s);

    // Chama a função para buscar o anagrama em s.
    char* result = buscar_anagrama(n, s);

    // Imprime o resultado encontrado ou "*".
    printf("%s\n", result);

    return 0;
}
