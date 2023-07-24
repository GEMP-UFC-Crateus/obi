# [Cálculo Rápido](https://olimpiada.ic.unicamp.br/pratique/p2/2021/f2/calculo/)

Algumas pessoas conseguem fazer cálculos matemáticos com uma velocidade impressionante. Laurinha tem essa habilidade! Um cálculo que ela consegue fazer muito rapidamente é, dados três números inteiros S, A, e B, determinar quantos números do intervalo [A, B] têm a soma de seus dígitos igual a S.

Por exemplo, se S = 3, A = 10 e B = 30, então a reposta é 3, pois existem três números no intervalo [10,30] cuja soma dos dígitos é igual a três: 12, 21 e 30.

Sua tarefa é escrever um programa de computador para, dados os três números, tentar calcular a resposta mais rapidamente do que Laurinha consegue.

### **Entrada**

A primeira linha da entrada contém um número inteiro S, o valor da soma dos dígitos. A segunda e a terceira linhas contêm respectivamente os inteiros A e B.

### **Saída**

Seu programa deve produzir uma única linha, contendo um único inteiro, quantos números no intervalo dado têm a soma de dígitos indicada.


### Restrições

* 1 ≤ S ≤ 36
* 1 ≤ A ≤ 10 000
* 1 ≤ B ≤ 10 000
* A ≤ B

### **Exemplo**

| Entrada | Saída |
| :-----: | :----: |
|    3    |   3   |
|   10   |        |
|   30   |        |

| Entrada | Saída |
| :-----: | :----: |
|   15   |   0   |
|    1    |        |
|   20   |        |

| Entrada | Saída |
| :-----: | :----: |
|    1    |   5   |
|    1    |        |
|  10000  |        |
