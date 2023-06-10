v = int(input())
valores = []
for i in range(0, 3):
    valores.append(int(input()))

valores.sort()

contas = 0
for i in valores:
    v -= i
    if v < 0:
        break
    else:
        contas += 1

print(contas)
