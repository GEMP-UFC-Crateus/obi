def nota_mais_frequente(notas):

    contagem_notas = {}
    for nota in notas:
        if nota in contagem_notas:
            contagem_notas[nota] += 1
        else:
            contagem_notas[nota] = 1

    nota_mais_frequente = 0
    maior_frequencia = 0
    for nota, frequencia in contagem_notas.items():
        if frequencia > maior_frequencia:
            nota_mais_frequente = nota
            maior_frequencia = frequencia
        elif frequencia == maior_frequencia and nota > nota_mais_frequente:
            nota_mais_frequente = nota

    return nota_mais_frequente


# Lê a entrada do usuário
n = int(input())
notas = list(map(int, input().split()))

# Chama a função para encontrar a nota mais frequente
nota_mais_frequente = nota_mais_frequente(notas)

# Imprime a nota mais frequente
print(nota_mais_frequente)
