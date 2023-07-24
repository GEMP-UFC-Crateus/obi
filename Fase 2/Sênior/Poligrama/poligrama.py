def buscar_anagrama(n, s):
    # Inicializa um vetor freq com 26 posições, referentes às letras do alfabeto, todas com valor 0.
    freq = [0] * 26

    for i in range(1, n):
        # Verifica se n não é divisível por i.
        if n % i != 0:
            continue
        # Reseta o vetor freq para 0.
        for j in range(26):
            freq[j] = 0
        # Preenche o vetor freq com as frequências das letras no prefixo da string de tamanho i.
        for j in range(i):
            freq[ord(s[j]) - ord('a')] += 1  # Adiciona 1 na posição da letra
        certo = True  # Inicializa uma variável booleana certo como True

        # Verifica se há um padrão de repetição do prefixo em s.
        # Inicia um loop que percorrerá a string de i em i posições, buscando um padrão de repetição.
        for k in range(i, n, i):
            # Loop para percorrer o trecho do prefixo atual dentro do padrão de repetição.
            for j in range(k, k + i):
                # Verifica se a frequência da letra na posição j é igual a 0. Se for, significa que a letra não está presente no prefixo atual e, portanto, não há padrão de repetição.
                if freq[ord(s[j]) - ord('a')] == 0:
                    certo = False  # portanto a que passa a ser False
                    break  # E encerramos o Loop
                # Decrementa a frequência da letra na posição j em freq, já que a letra foi encontrada dentro do padrão de repetição.
                freq[ord(s[j]) - ord('a')] -= 1

            # Verifica se certo é falso (ou seja, não há padrão de repetição) e, nesse caso, interrompe o loop externo.
            if not certo:
                break

            # Restaura as frequências das letras no prefixo atual, adicionando 1 em cada posição de freq.
            for j in range(i):
                freq[ord(s[j]) - ord('a')] += 1

        # Se encontrou um padrão de repetição, retorna o prefixo da string que forma o anagrama.
        if certo:
            return s[:i]

    # Se não encontrou um anagrama, retorna "*".
    return "*"


n = int(input())  # Lê o tamanho da string.
s = input()  # Lê a string.
# Chama a função para buscar o anagrama em s.
result = buscar_anagrama(n, s)
print(result)  # Imprime o resultado encontrado ou "*".
