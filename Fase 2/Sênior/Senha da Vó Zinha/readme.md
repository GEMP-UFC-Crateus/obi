# [Senha da Vó Zinha](https://olimpiada.ic.unicamp.br/pratique/p2/2021/f2/senha/)

Vó Zinha foi sempre muito cuidadosa com as senhas que usa para suas atividades na Internet, como compras, redes sociais e correio eletrônico, e é especialmente cuidadosa com a senha do banco.

No entanto, como está ficando um pouco esquecida das coisas, ela resolveu deixar sua senha do banco escrita, para o caso de necessidade. Obviamente, ela não escreveu simplesmente a senha num papel! Ela inventou uma forma de proteger a senha, mesmo estando escrita, e contou somente para você como fazer para recuperar a senha.

Com um pedaço de papel que Vó Zinha guardou na gaveta onde guarda também suas meias ela fez o seguinte:

* inicialmente escreveu a senha do banco no papel;
* então borrou algumas das letras da senha que tinha escrito de forma que não possam ser lidas;
* para cada uma das letras borradas, ela escreveu no papel uma palavra com K letras;
* por fim, ela escreveu no papel um número inteiro P.

Vó Zinha então contou para você como recuperar a senha:

* utilizando as listas de palavras no papel, substitua cada letra borrada da senha por uma das letras da respectiva lista, obtendo assim possíveis senhas;
* crie uma lista contendo todas as possíveis senhas obtidas no passo anterior;
* ordene a lista de possíveis senhas em ordem lexicograficamente crescente;
* a senha correta é a P-*ésima* possível senha na lista ordenada.

Por exemplo, considere que no papel esteja escrito (• representa uma letra borrada):

**x•yy•z**
ab
cd
3
Fazendo as substituições, a lista das possíveis senhas é  *xayycz, xbyycz, xayydz, xbyydz * .

Ordenando as possíveis senha obtemos  *xayycz, xayydz, xbyycz, xbyydz* , e portanto a senha correta é *xbyycz* (a terceira da lista ordenada).

Hoje Vó Zinha precisa pagar uma conta pela internet e não se recorda da senha do banco. Ela pediu que você pegue o pedaço de papel guardado na gaveta e a ajude a recuperar a senha.

### Entrada

A primeira linha da entrada contém três números inteiros N, M e K, respectivamente o número de caracteres da senha, o número de letras borradas da senha e o comprimento de cada palavra. A segunda linha contem uma cadeia de caracteres de comprimento N, a senha escrita no papel, com o caractere `**#**' (cerquilho) representando as letras borradas. Cada uma das M linhas seguintes contém uma palavra S ~i~ , sendo que a S ~i~ -ésima palavra contém as letras para substituir a i-ésima letra borrada da senha. A última linha contém um número inteiro P, o número de ordem da senha correta na lista ordenada de possíveis senhas.

### Saída

Seu programa deve produzir uma única linha, contendo uma única cadeia de caracteres, a senha correta.

### Restrições

* 1 ≤ N ≤ 500
* 1 ≤ M ≤ N
* 1 ≤ K ≤ 26
* comprimento de S~i~ = K, para 1 ≤ i ≤ M
* 1 ≤ P ≤ 10⁹
* Na senha com as letras "borradas", cada caractere é uma letra minúscula não acentuada ou o caractere **#**.
* Nas palavras com as letras que podem substituir as letras borradas da senha, cada caractere é uma letra minúscula não acentuada.
* P ≤ número total de possíveis senhas

### Informações sobre a pontuação

* Para um conjunto de casos de testes valendo 30 pontos, M=1.
* Para um conjunto de casos de testes valendo outros 30 pontos, M ≤ 8 e K ≤ 6.
* Para um conjunto de casos de testes valendo outros 40 pontos, nenhuma restrição adicional.

### Exemplo

| Entrada | Saída |
| :-----: | :----: |
|  6 2 2  | xbyyc |
| x#yy#z |        |
|   ab   |        |
|   cd   |        |
|    3    |        |

| Entrada | Saída |
| :-----: | :----: |
|  4 1 3  |  bgof  |
|  #gof  |        |
|   abc   |        |
|    2    |        |
