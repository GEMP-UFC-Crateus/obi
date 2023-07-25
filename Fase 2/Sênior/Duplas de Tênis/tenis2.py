# Lê os níveis de jogo dos quatro amigos
amigos = [int(input()) for _ in range(4)]

# Ordena a lista em ordem crescente
amigos = sorted(amigos)

# Faz a diferença entre os níveis, gerando sempre um valor absoluto (positivo)
print(abs((amigos[0]+amigos[3])-(amigos[1]+amigos[2])))