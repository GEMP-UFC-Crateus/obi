# Lê três números inteiros: n, m e k, respectivamente, o número de caracteres da senha, o número de letras borradas da senha e o comprimento de cada palavra da lista de possibilidades.
n, m, k = map(int, input().split())

# Lê a senha escrita no papel com caracteres borrados representados por '#'.
s = input()

# Inicializa uma lista vazia chamada possib para armazenar as possibilidades.
possib = []

# Loop para ler m strings e adicionar cada uma delas à lista possib após ordená-las.
for i in range(m):
    possib.append(input())  # Lê uma string e a adiciona à lista possib.
    # Ordena lexicograficamente a string e atualiza a posição i na lista possib.
    possib[i] = ''.join(sorted(possib[i]))

p = int(input())  # Lê um número inteiro p.

# Subtrai 1 de p (para ajustar o índice para a base 0).
p -= 1

# Inicializa a variável j com m - 1, representando o índice do último elemento da lista possib.
j = m - 1

# Loop para percorrer a string s de trás para frente (da direita para a esquerda).
for i in range(n-1, -1, -1):
    if s[i] == '#':  # Se o caractere atual em s for '#':
        # Substitui o caractere '#' na posição i por possib[j][p % k], selecionando a letra da lista de possibilidades de acordo com o valor de p e k.
        s = s[:i] + possib[j][p % k] + s[i+1:]
        # Divide p por k (usando divisão inteira) para avançar para o próximo caractere em possib[j].
        p //= k
        # Decrementa j para ir para a próxima string em possib.
        j -= 1

# Imprime a senha descriptografada após as substituições.
print(s)

"""
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
"""
