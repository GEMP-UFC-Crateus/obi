N, M = map(int, input().split())
alturas = list(map(int, input().split()))

movimentos = 0
for i in range(N - 1):
    diferenca = M - alturas[i]
    alturas[i] += diferenca
    alturas[i + 1] += diferenca
    movimentos += abs(diferenca)

print(movimentos)
