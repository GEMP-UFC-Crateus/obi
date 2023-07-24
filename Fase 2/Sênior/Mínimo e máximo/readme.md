# Mínimo e máximo

Algumas pessoas conseguem fazer cálculos matemáticos com uma velocidade impressionante. Pedrinho tem essa habilidade! Um cálculo que ele consegue fazer muito rapidamente é, dados três números inteiros S, A, e B, determinar qual o menor número inteiro do intervalo [A,B] tal que a soma de seus dígitos é igual a S.

Por exemplo, se S = 1, A = 10, B = 30, então a reposta é 12, pois existem três números no intervalo [10,30] cuja soma dos dígitos é igual a três: 12, 21 e 30, e 12 é o menor deles.

Um colega desafiou Pedrinho a calcular não somente o menor número, mas também o maior número no intervalo [A,B] tal que a soma dos números é igual ao valor de S dado. Por exemplo, se A = 1, B = 1000 e S = 1, então a reposta é 1 e 1000, pois existem quatro números no intervalo [1,1000] cuja soma dos dígitos é igual a um: 1,10,100,1000, sendo 1 o menor e 1000 o maior.

Sua tarefa é escrever um programa de computador para, dados os três números, tentar calcular a resposta para o desafio mais rapidamente do que Pedrinho.

### Entrada

A primeira linha da entrada contém um número inteiro S, o valor da soma dos dígitos. A segunda e a terceira linhas contêm respectivamente os inteiros A e B.

### Saída

Seu programa deve produzir exatamente duas linhas. A primeira linha deve conter um inteiro, o menor número cuja soma de dígitos tem o valor indicado, no intervalo dado. A segunda linha deve conter um inteiro, o maior número cuja soma de dígitos tem o valor indicado, no intervalo dado.

### Restrições

* 1 ≤ S ≤ 36
* 1 ≤ A ≤ 10 000
* 1 ≤ B ≤ 10 000
* A ≤ B
* sempre haverá ao menos um número no intervalo [A,B] cuja soma dos dígitos é igual a S.

### Exemplos

| Entrada | Saída |
| :-----: | :----: |
|    3    |   12   |
|   10   |   30   |
|   30   |        |

| Entrada | Saída |
| :-----: | :----: |
|   12   |  129  |
|   100   |  480  |
|   500   |        |

| Entrada | Saída |
| :-----: | :----: |
|   18   |   99   |
|    1    |   99   |
|   100   |        |
