N = int(input())  # Lê o número total de peças

pecas = set(range(1, N + 1))  # Cria um conjunto com todas as peças possíveis
pecas_presentes = set(map(int, input().split()))  # Lê as peças presentes e cria um conjunto

peca_faltando = pecas - pecas_presentes  # Encontra a diferença entre os conjuntos

print(peca_faltando.pop()) 