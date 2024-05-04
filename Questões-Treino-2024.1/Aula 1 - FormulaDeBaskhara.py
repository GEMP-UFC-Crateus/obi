import math

""" Lendo os valores de A, B e C """
a, b, c = map(float, input().split())

""" Calculando delta """
delta = (b * b) - (4 * a * c)

""" Se delta < 0 ou a = 0, impossível calcular, pq não dividimos por 0 e não existe raiz negativa"""
if delta < 0 or a == 0:
    print("Impossivel calcular")
else:
    """ Caso contrário temos 2 raizes reais"""
    r1 = (-b + math.sqrt(delta)) / (2 * a)
    r2 = (-b - math.sqrt(delta)) / (2 * a)

    """ Imprimindo as raizes """
    print(f"R1 = {r1:.5f}")
    print(f"R2 = {r2:.5f}")