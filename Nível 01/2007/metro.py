def tamanho_maximo_fatia(N, tamanhos_paes):
    """Encontra o tamanho máximo da fatia que pode ser cortada para atender a todos.

    Args:
        N: O número de pessoas a serem atendidas.
        tamanhos_paes: Uma lista com os tamanhos dos pães.

    Returns:
        O tamanho máximo da fatia (inteiro).
    """

    # Define os limites da busca binária
    inicio = 1
    fim = max(tamanhos_paes)

    while inicio <= fim:
        meio = (inicio + fim) // 2
        fatias_obtidas = sum(tamanho // meio for tamanho in tamanhos_paes)

        if fatias_obtidas >= N:
            inicio = meio + 1  # Tenta um tamanho maior
        else:
            fim = meio - 1  # Precisa de um tamanho menor

    return fim  # O último tamanho válido encontrado é o máximo


# Lê os dados de entrada
N = int(input())
K = int(input())
tamanhos_paes = list(map(int, input().split()))

# Calcula e imprime o resultado
tamanho_maximo = tamanho_maximo_fatia(N, tamanhos_paes)
print(tamanho_maximo)
