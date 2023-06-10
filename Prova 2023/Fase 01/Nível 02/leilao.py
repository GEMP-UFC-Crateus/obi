n = int(input())

leilao = []
for i in range(0, n):
    pessoa = []
    pessoa.append(str(input()))
    pessoa.append(int(input()))
    leilao.append(pessoa)

val1 = leilao[0][1]
for i in leilao:
    if i[1] > val1:
        val1 = i[1]
        nome = i[0]

print(nome)
print(val1)
