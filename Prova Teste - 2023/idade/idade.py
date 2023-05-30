entrada = []
for i in range(0,3):
    idade = int(input())
    if idade>= 5 and idade<=100:
        entrada.append(idade)

entrada.sort()
print(entrada[1])