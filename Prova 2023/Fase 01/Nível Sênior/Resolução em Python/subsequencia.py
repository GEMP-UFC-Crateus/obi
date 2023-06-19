a = list(map(int, input().split(' ')))

sequencia = list(map(int, input().split(' ')))
subsequencia = list(map(int, input().split(' ')))

index_sequencia = 0
index_subsequencia = 0

while index_sequencia < len(sequencia) and index_subsequencia < len(subsequencia):
    if sequencia[index_sequencia] == subsequencia[index_subsequencia]:
        index_subsequencia += 1
    index_sequencia += 1

if index_subsequencia == len(subsequencia):
    print("S")
else:
    print("N")
