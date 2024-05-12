MAXN = 200200

# Crio uma lista de pares de caractere e inteiro chamada "lista"
lista = [None] * MAXN

# Leio a quantidade de peças
n = int(input())

# Para cada peça do quebra-cabeça
for i in range(1, n + 1):
    # Leio seus valores de "e", "d" e "c"
    e, c, d = map(str, input().split())
    e = int(e)
    d = int(d)
    
    # E adiciono essa peça ao vetor "lista"
    lista[e] = (c, d)

# Agora basta montar o quebra-cabeça
# Que continuará enquanto o número da parte direita da peça atual não for 1
prox = 0  # Prox será o número da parte esquerda da peça que irei imprimir
while prox != 1:
    # Imprimo o caractere dessa peça
    print(lista[prox][0], end='')

    # E faço a próxima peça a ser acessada ser a do número direito da peça atual
    prox = lista[prox][1]

print(type(lista))