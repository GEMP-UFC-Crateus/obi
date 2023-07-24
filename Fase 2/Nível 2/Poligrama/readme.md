# [Poligrama](https://olimpiada.ic.unicamp.br/pratique/ps/2021/f2/poligrama/)

Duas palavras A e B são *anagramas entre si* se podemos transformar a palavra A na palavra B apenas trocando de posição as letras da palavra A. Por exemplo, "duetos" e "estudo" são anagramas entre si. Um outro exemplo é "bba" e "bab".

Vamos chamar de *poligrama* uma palavra que consiste na concatenação de duas ou mais palavras que são anagramas entre si. A primeira dessas palavras é chamada de *raiz* do poligrama. Por exemplo, a palavra "bbabab" é um poligrama com raiz "bba", pois ela é a concatenação dos anagramas "bba" e "bab".

Dada uma palavra, escreva um programa que determine se ela é um poligrama e encontre a sua raiz.

### Entrada

A primeira linha da entrada contém um inteiro N, indicando o número de letras da palavra. A segunda linha contém a palavra P.

### Saída

Seu programa deve produzir uma única linha. Se a palavra dada é um poligrama, a linha deve conter a raiz do poligrama. Caso contrário, a linha deve conter o caractere asterisco ('*****'). Se houver mais de uma raiz possível, seu programa deve imprimir a de menor comprimento.

### Restrições

* 1 ≤ N ≤ 100 000
* O número de caracteres de P é igual a N.
* Os únicos caracteres em P são letras minúsculas não acentuadas.

### Informações sobre a pontuação

* Para um conjunto de casos de testes valendo 40 pontos, N ≤ 1000.
* Para um conjunto de casos de testes valendo outros 70 pontos, nenhuma restrição adicional.

### Exemplos

| Entrada | Saída |
| :-----: | :----: |
|    5    |   x   |
|  xxxxx  |        |

| Entrada | Saída |
| :-----: | :----: |
|    2    |   *   |
|   xy   |        |

| Entrada | Saída |
| :-----: | :----: |
|    6    |  bba  |
| bbabab |        |
