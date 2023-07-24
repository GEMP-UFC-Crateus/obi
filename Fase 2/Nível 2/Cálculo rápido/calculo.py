def soma_dig(i):
    # Esta função recebe um número "i" como parâmetro e calcula a soma dos seus dígitos.
    # Ela utiliza o operador de módulo (%) para obter o último dígito do número e adicioná-lo à variável "soma".
    soma = i % 10
    # Em seguida, um laço while é utilizado para iterar pelo número, eliminando o último dígito a cada iteração.
    while i > 1:
        i //= 10
        soma += (i % 10)
    # Por fim, a função retorna o resultado da soma dos dígitos.
    return soma


"""
Ex:.
    s=4
    a=0
    b=1200

    1º Chamada da função soma_dig(1111).
    2º Inicialização da variável soma como o último dígito de 1111, que é 1 (soma = 1111 % 10 == 1).
    3º Divisão inteira de i por 10: i //= 10, resultando em i = 111.
    4º Atualização de soma adicionando o último dígito de 111, que é 1 (soma = soma + (i % 10) => soma = 1 + (111 % 10) => soma = 1 + 1 = 2).
    5º Divisão inteira de i por 10: i //= 10, resultando em i = 11.
    6º Atualização de soma adicionando o último dígito de 11, que é 1 (soma = soma + (i % 10) => soma = 2 + (11 % 10) => soma = 2 + 1 = 3).
    7º Divisão inteira de i por 10: i //= 10, resultando em i = 1.
    8º Atualização de soma adicionando o último dígito de 1, que é 1 (soma = soma + (i % 10) => soma = 3 + (1 % 10) => soma = 3 + 1 = 4).
    9º Agora, a função soma_dig(1111) terminou de calcular a soma dos dígitos e retorna o valor 4.


"""


# Entrada de dados do usuário
s = int(input())  # Valor referente à soma dos dígitos (S)
a = int(input())  # Valor do limite inferior do intervalo (A)
b = int(input())  # Valor do limite superior do intervalo (B)

# Variável para contar quantas vezes o número no intervalo A - B tem soma igual a S.
count = 0

# Loop para iterar por todos os números no intervalo de A a B (incluindo A e B)
for i in range(a, b+1):
    # Verifica se a soma dos dígitos do número atual (i) é igual a S (usando a função soma_dig).
    if soma_dig(i) == s:
        # Se for igual, incrementa o contador.
        count += 1

# Exibe a quantidade de valores no intervalo de A a B em que a soma dos dígitos é igual a S.
print(count)
