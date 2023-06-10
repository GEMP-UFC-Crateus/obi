t = list(map(int, input().split(' ')))
matriz = [[False] * t[0] for _ in range(t[0])]

for i in range(t[1]):
    aresta = list(map(int, input().split(' ')))
    matriz[aresta[0]-1][aresta[1]-1] = True
    matriz[aresta[1]-1][aresta[0]-1] = True

p = int(input())
cont = 0

for i in range(p):
    caminho = list(map(int, input().split(' ')))
    caminho = caminho[1:]

    for j in range(len(caminho)-1):
        if matriz[caminho[j]-1][caminho[j+1]-1] == False:
            break
    else:
        cont += 1

print(cont)
