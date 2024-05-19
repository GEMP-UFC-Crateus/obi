qtd_grupos = int(input())

for _ in range(qtd_grupos):
    pessoas = int(input())
    idiomas = set()  # Cria um conjunto vazio para armazenar os idiomas
    for _ in range(pessoas):
        idiomas.add(input())  # Adiciona cada idioma ao conjunto
    
    if len(idiomas) == 1:  # Se houver apenas um idioma no conjunto
        print(idiomas.pop())  # Imprime o idioma único
    else:
        print('ingles')  # Caso contrário, imprime 'ingles'