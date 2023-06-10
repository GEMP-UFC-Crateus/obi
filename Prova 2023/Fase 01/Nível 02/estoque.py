qtd = list(map(int, input().split(' ')))

estoque = []
for i in range(0, qtd[0]):
    peca = list(map(int, input().split(' ')))
    estoque.append(peca)

qtd_compras = int(input())
compras = []
for i in range(0, qtd_compras):
    compra = list(map(int, input().split(' ')))
    compras.append(compra)

quantidade_compras = 0
for compra in compras:
    if (estoque[compra[0]-1][compra[1]-1] > 0):
        quantidade_compras += 1
        estoque[compra[0]-1][compra[1]-1] -= 1

print(quantidade_compras)
