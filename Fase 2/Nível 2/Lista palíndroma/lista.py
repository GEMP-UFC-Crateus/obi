n = int(input())  # Lê a quantidade de números da lista.

# Transforma a string de números separados por espaço em uma lista de inteiros.
v = list(map(int, input().split()))

i = 0       # Aponta para o primeiro item da lista.
j = n - 1   # Aponta para o último item da lista.
# Contador para identificar quantas operações/transformações serão realizadas na lista.
op = 0
se = v[i]   # Variável para armazenar a soma das posições à esquerda.
sd = v[j]   # Variável para armazenar a soma das posições à direita.

# Loop para realizar as operações até que os ponteiros se cruzem.
while i <= j:
    if se == sd:  # Se as somas das partes à esquerda e à direita forem iguais:
        i += 1    # Incrementa o ponteiro da esquerda.
        j -= 1    # Decrementa o ponteiro da direita.
        se = v[i]  # Atualiza a soma da esquerda.
        sd = v[j]  # Atualiza a soma da direita.
    elif se < sd:  # Se a soma à esquerda for menor que a soma à direita:
        i += 1     # Incrementa o ponteiro da esquerda.
        se += v[i]  # Adiciona o próximo elemento à soma da esquerda.
        op += 1    # Incrementa o contador de operações.
        # Se os ponteiros se cruzarem (caso com lista de tamanho ímpar).
        if i == j:
            break
    else:  # Se a soma à direita for menor que a soma à esquerda:
        j -= 1     # Decrementa o ponteiro da direita.
        sd += v[j]  # Adiciona o próximo elemento à soma da direita.
        op += 1    # Incrementa o contador de operações.
        # Se os ponteiros se cruzarem (caso com lista de tamanho ímpar).
        if i == j:
            break

# Imprime o número de operações/transformações realizadas.
print(op)
