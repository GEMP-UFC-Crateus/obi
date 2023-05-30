def trocar_valores(array1, array2, posicao_inicial, posicao_final):
    array1[posicao_inicial:posicao_final+1], array2[posicao_inicial:posicao_final +
                                                    1] = array2[posicao_inicial:posicao_final+1], array1[posicao_inicial:posicao_final+1]


# Recebe a quantidade de valores e quantidade de trocas
valores = input().split()
quantidade_valores = int(valores[0])
quantidade_trocas = int(valores[1])

# Recebe os valores dos arrays
array1 = list(map(int, input().split()))
array2 = list(map(int, input().split()))

# Realiza as trocas
while quantidade_trocas > 0:
    posicoes = input().split()
    posicao_inicial = int(posicoes[0]) - 1
    posicao_final = int(posicoes[1]) - 1
    trocar_valores(array1, array2, posicao_inicial, posicao_final)
    quantidade_trocas -= 1

# Imprime os array modificados
print(' '.join(map(str, array1)))
