def media(A, B):
    # A função recebe dois valores, A e B, e realiza uma operação matemática.
    # Calcula o resultado da expressão 2*A - B e atribui o resultado à variável C.
    C = 2 * A - B
    # Retorna o valor de C como resultado da função.
    return C


# Lê dois valores inteiros (A e B) separados por espaço do usuário e os atribui a A e B, respectivamente.
A, B = map(int, input().split())

# Chama a função media com os valores lidos e imprime o resultado retornado pela função.
print(media(A, B))


"""
    (a+b+c)/3 = b
    a+b+c = 3*b
    a = 3*b - b - c
    a = 2*b - c
"""
