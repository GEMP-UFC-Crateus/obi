qtd_quadrados, soma = map(int, input().split())
valores = list(map(int, input().split()))

result = 0

for inicio in range(qtd_quadrados):
    soma_atual = 0
    for fim in range(inicio, qtd_quadrados):
        soma_atual += valores[fim]
        if soma_atual == soma:
            result += 1
        elif soma_atual > soma:
            break

print(result)

