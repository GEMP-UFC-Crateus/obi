""" Pegando a entrada e transformando em int """
n = int(input())

""" Lendo as frases e o valor de k """
for _ in range(n):
    frase = input()
    k = int(input())
    """ Criando uma nova frase que vai ser a decifrada"""
    nova_frase = ""

    """ Decifrando a frase"""
    for letra in frase:
        if ord(letra) - k < 65:
            nova_letra = chr(ord(letra) - k + 26)
        else:
            nova_letra = chr(ord(letra) - k)
        nova_frase += nova_letra

    """ Imprimindo a nova frase"""
    print(nova_frase)
