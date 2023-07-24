#include <stdio.h>
#include <string.h>  // fornece várias funções para manipulação de strings, como strlen, strcpy, strcat, entre outras.

// Função para ordenar uma string.
void sortString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    int n, m, k;
    // Lê três números inteiros n, m e k separados por espaço.
    scanf("%d %d %d", &n, &m, &k);

    char s[n+1];
    // Lê a senha escrita no papel com caracteres borrados representados por '#'.
    scanf("%s", s);

    char possib[m][k+1];
    // Loop para ler m strings e adicioná-las à matriz possib após ordená-las.
    for (int i = 0; i < m; i++) {
        scanf("%s", possib[i]);
        sortString(possib[i]);
    }

    int p;
    // Lê um número inteiro p.
    scanf("%d", &p);

    // Subtrai 1 de p (para ajustar o índice para a base 0).
    p--;

    // Inicializa a variável j com m - 1, representando o índice do último elemento da matriz possib.
    int j = m - 1;

    // Loop para percorrer a string s de trás para frente (da direita para a esquerda).
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '#') {  // Se o caractere atual em s for '#':
            // Substitui o caractere '#' na posição i por possib[j][p % k], selecionando a letra da matriz de possibilidades de acordo com o valor de p e k.
            s[i] = possib[j][p % k];
            // Divide p por k (usando divisão inteira) para avançar para o próximo caractere em possib[j].
            p /= k;
            // Decrementa j para ir para a próxima string em possib.
            j--;
        }
    }

    // Imprime a senha descriptografada após as substituições.
    printf("%s\n", s);

    return 0;
}

/*
n = 6
m = 2
k = 2

s = x#yy#z
possib = []
possib = ['ab','cd']
p = 3 - 1 = 2
j = 2 - 1 = 1

x#yy#z
012345

s[4] == '#'
s = "x#yy"+possib[1][0]+"z"
s = "x#yycz"
p = 1
j = 0

s[1] == '#'
s = "x"+possib[0][1]+"yycz"
s = "xbyycz"
p = 0
j = -1

*/