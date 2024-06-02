def calcula_menor_soma(N, M, anotacoes):
    total_sum = 0
    last_distance = 0
    
    for i in range(N):
        distancia1 = anotacoes[i]
        distancia2 = M - anotacoes[i]
        
        if distancia1 >= last_distance or distancia2 >= last_distance:
            if distancia1 >= last_distance and distancia2 >= last_distance:
                menor_valido = min(distancia1, distancia2)
            elif distancia1 >= last_distance:
                menor_valido = distancia1
            else:
                menor_valido = distancia2
                
            total_sum += menor_valido
            last_distance = menor_valido
        else:
            return -1
    
    return total_sum

# Leitura da entrada
N, M = map(int, input().split())
anotacoes = list(map(int, input().split()))

# Calcula e imprime a menor soma das distâncias exploradas
resultado = calcula_menor_soma(N, M, anotacoes)
print(resultado)
