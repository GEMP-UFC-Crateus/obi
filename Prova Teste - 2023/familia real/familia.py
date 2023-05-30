# Pegando os dados
valores = [int(x) for x in input().split(" ")]
descendentes = [int(x) for x in input().split(" ")]
participantes = [int(x) for x in input().split(" ")]

# Pegando os filhos do rei
matriz = []
array = []
for c, descendente in enumerate(descendentes):
    if descendente == 0:
        array.append(c+1)
matriz.append(array)

# Preenchendo a matriz com todos os descendentes do rei
cont = 0
resultado = []
while True:
    array = []
    presente = 0
    for i in matriz[cont]:
        if i in participantes:
            presente += 1
        for c, descendente in enumerate(descendentes):
            if i == descendente:
                array.append(c+1)
    conta = "{:.2f}%".format(
        (presente/len(matriz[cont]))*100) if presente > 0 else "0%"
    resultado.append(conta)
    matriz.append(array)
    if not array:
        break
    cont += 1

print(' '.join(resultado))
