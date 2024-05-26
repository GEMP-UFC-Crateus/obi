def busca_binaria(limites, forca):
    inicio, fim = 0, len(limites) - 1
    while inicio <= fim:
        meio = (inicio + fim) // 2
        if forca < limites[meio]:
            fim = meio - 1
        else:
            inicio = meio + 1
    return fim  # Retorna o índice da faixa correta

# Leitura da entrada
N, M = map(int, input().split())
limites_faixas = [0] + list(map(int, input().split()))
premios = list(map(int, input().split()))
forcas_ogros = list(map(int, input().split()))

# Processamento das premiações (com busca binária)
premios_ogros = [premios[busca_binaria(limites_faixas, forca)] for forca in forcas_ogros]

# Impressão dos resultados
print(*premios_ogros)

