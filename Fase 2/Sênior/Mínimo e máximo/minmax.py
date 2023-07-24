def soma_dig(i):
    # Função soma_dig recebe um número i como parâmetro e calcula a soma dos seus dígitos.
    # Inicialmente, atribui o último dígito de i à variável soma.
    soma = i % 10
    # Em seguida, enquanto o número ainda tiver mais dígitos, itera pelo número e soma cada dígito ao valor anterior.
    while i > 1:
        i //= 10
        soma += i % 10
    # Retorna o resultado da soma dos dígitos.
    return soma


# Lê três valores do usuário: s (valor da soma dos dígitos), n (limite inferior) e m (limite superior).
s = int(input())
a = int(input())
b = int(input())

# Inicializa as variáveis maior e menor com -1.
maior = -1
menor = -1

# Loop para iterar por todos os números no intervalo de a a b (inclusive).
for i in range(a, b+1):
    # Verifica se a soma dos dígitos do número atual (i) é igual a s (usando a função soma_dig).
    if soma_dig(i) == s:
        # Se a soma dos dígitos for igual a s, atualiza o valor da variável maior para i.
        maior = i
        # Se a variável menor ainda tiver o valor inicial de -1, atualiza-a também para i.
        # Isso garante que a variável menor armazenará o primeiro valor encontrado com a soma dos dígitos igual a s.
        if menor == -1:
            menor = i

# Imprime o menor valor encontrado com a soma dos dígitos igual a s.
print(menor)
# Imprime o maior valor encontrado com a soma dos dígitos igual a s.
print(maior)
