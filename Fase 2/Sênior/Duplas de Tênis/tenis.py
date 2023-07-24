# Lê os níveis de jogo dos quatro amigos
friends_levels = [int(input()) for _ in range(4)]

# Calcula todas as diferenças possíveis entre os níveis dos amigos
diff1 = abs(friends_levels[0] + friends_levels[1] - (friends_levels[2] + friends_levels[3]))
diff2 = abs(friends_levels[0] + friends_levels[2] - (friends_levels[1] + friends_levels[3]))
diff3 = abs(friends_levels[0] + friends_levels[3] - (friends_levels[1] + friends_levels[2]))

# Encontra a menor diferença
min_diff = min(diff1, diff2, diff3)

print(min_diff)
