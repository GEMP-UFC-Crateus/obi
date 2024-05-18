""" 
1º Você Demonstra esse código, faz com eles exatamente coo está, e depois explica o que ele faz
Só que ele vai dá errado, e você vai explicar o porquê pois a complexidade dele é O(n^2)
Isso é ruim, pois a entrada pode ser muito grande, e o código pode demorar muito para executar

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

Aí você vai explicar que tem um jeito de fazer isso em O(n), e vai mostrar o código abaixo  

"""


## Temos essa forma que da certo com complexidade O(n)
qtd_quadrados, soma = map(int, input().split())
valores = list(map(int, input().split()))

result = {0: 1}  # Inicializa com a soma 0 tendo frequência 1
soma_atual = 0
qtd_retangulos = 0

for valor in valores:
    soma_atual += valor
    
    # Verifica se a soma_atual - soma já foi encontrada antes
    if soma_atual - soma in result:
        qtd_retangulos += result[soma_atual - soma]

    # Atualiza a frequência da soma_atual no dicionário
    result[soma_atual] = result.get(soma_atual, 0) + 1

print(qtd_retangulos)  # Imprime a quantidade de retângulos com a soma desejada





# E ESSA OUTRA QUE TAMÉM DA CERTO COM COMPLEXIDADE O(n)

num_quadrados, valor_soma = map(int, input().split())
soma = {0: 1}
vals = map(int, input().split())

resultado = 0
atual = 0

for x in vals:
    atual += x
    resultado += soma.get(atual - valor_soma, 0)
    soma[atual] = soma.get(atual, 0) + 1  

print(resultado)

#CALCULE A COMPLEXIDADE UTILIZANDO O https://www.bigocalc.com/