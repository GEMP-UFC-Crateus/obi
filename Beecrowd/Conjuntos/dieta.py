def dieta_jantar(dieta, cafe, almoco):
    jantar = set(dieta) - set(cafe) - set(almoco)

    # Verifica se houve trapaça:
    if len(jantar) != len(dieta) - len(cafe) - len(almoco):
        return "CHEATER"

    return ''.join(sorted(jantar))


# Lê a quantidade de casos de teste
n = int(input())

# Processa cada caso de teste
for _ in range(n):
    dieta = input()
    cafe = input()
    almoco = input()

    print(dieta_jantar(dieta, cafe, almoco))
