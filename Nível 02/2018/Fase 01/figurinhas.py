n, c, m = map(int, input().split())
carimbadas = [int(x) for x in input().split()]

compradas = [int(x) for x in input().split()]

for i in carimbadas:
    if i in compradas:
        c -= 1

print(c)


n, c, m = map(int, input().split())
carimbadas = set(map(int, input().split()))
compradas = set(map(int, input().split()))

c -= len(carimbadas.intersection(compradas))

print(c)
