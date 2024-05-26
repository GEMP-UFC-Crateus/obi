## Explicação do Problema

A questão descreve um cenário em que a coordenação da OBI deseja oferecer pão a metro aos competidores, mas enfrenta dois problemas:

1. **Reclamações:** Oferecer sanduíches pode gerar reclamações dos competidores.
2. **Desigualdade:** Algumas pessoas podem pegar pedaços maiores do que outras.

Para resolver isso, a ideia é cortar os pães em fatias de tamanho igual e distribuí-las. No entanto, um único pão pode não ser suficiente para um grande número de pessoas.

A questão, então, propõe o seguinte: dados vários pães de tamanhos diferentes e o número de pessoas a serem atendidas, qual o maior tamanho de fatia (inteiro) que pode ser cortado de modo que todos recebam uma fatia?

Vamos analisar cada um dos exemplos de entrada e saída, explicando como o algoritmo chega ao resultado:

**Exemplo 1:**

* **Entrada:**
  * `N = 10`: Há 10 pessoas para receber fatias de pão.
  * `K = 4`: Há 4 pães disponíveis.
  * `tamanhos_paes = [120, 89, 230, 177]`: Os tamanhos dos pães são 120cm, 89cm, 230cm e 177cm.
* **Saída:**
  * `57`: O maior tamanho possível para as fatias é 57cm.

**Explicação:**

1. **Ordenação:** Os tamanhos dos pães são ordenados:`[89, 120, 177, 230]`.
2. **Busca Binária:**
   * O algoritmo começa testando o tamanho médio entre o menor e o maior pão:`(1 + 230) // 2 = 115`. Com fatias de 115cm, não é possível obter 10 fatias.
   * O intervalo de busca é reduzido para a metade inferior:`[1, 114]`.
   * O próximo teste é com fatias de 57cm. Com esse tamanho, é possível obter 10 fatias (1 do pão de 89cm, 2 do de 120cm, 3 do de 177cm e 4 do de 230cm).
   * O algoritmo tenta aumentar o tamanho da fatia, mas não encontra um tamanho maior que permita obter 10 fatias.
   * Portanto, o tamanho máximo da fatia é 57cm.

**Exemplo 2:**

* **Entrada:**
  * `N = 3`: Há 3 pessoas para receber fatias de pão.
  * `K = 2`: Há 2 pães disponíveis.
  * `tamanhos_paes = [45, 85]`: Os tamanhos dos pães são 45cm e 85cm.
* **Saída:**
  * `42`: O maior tamanho possível para as fatias é 42cm.

**Explicação:**

1. **Ordenação:** Os tamanhos dos pães já estão ordenados:`[45, 85]`.
2. **Busca Binária:**
   * O algoritmo começa testando o tamanho médio entre o menor e o maior pão:`(1 + 85) // 2 = 43`. Com fatias de 43cm, não é possível obter 3 fatias.
   * O intervalo de busca é reduzido para a metade inferior:`[1, 42]`.
   * O próximo teste é com fatias de 21cm. Com esse tamanho, é possível obter 3 fatias (2 do pão de 45cm e 1 do de 85cm).
   * O algoritmo tenta aumentar o tamanho da fatia e encontra que 42cm também é válido (1 fatia de cada pão).
   * Portanto, o tamanho máximo da fatia é 42cm.

**Exemplo 3:**

* **Entrada:**
  * `N = 7`: Há 7 pessoas para receber fatias de pão.
  * `K = 7`: Há 7 pães disponíveis.
  * `tamanhos_paes = [100, 98, 99, 505, 102, 97, 101]`: Os tamanhos dos pães são 100cm, 98cm, 99cm, 505cm, 102cm, 97cm e 101cm.
* **Saída:**
  * `101`: O maior tamanho possível para as fatias é 101cm.

**Explicação:**

1. **Ordenação:** Os tamanhos dos pães são ordenados:`[97, 98, 99, 100, 101, 102, 505]`.
2. **Busca Binária:**
   * O algoritmo começa testando o tamanho médio entre o menor e o maior pão:`(1 + 505) // 2 = 253`. Com fatias de 253cm, não é possível obter 7 fatias.
   * O intervalo de busca é reduzido para a metade inferior:`[1, 252]`.
   * O algoritmo continua a busca, testando tamanhos cada vez menores, até encontrar que 101cm é o maior tamanho que permite obter 7 fatias (1 de cada pão, exceto o de 505cm).

Em todos os exemplos, a busca binária encontra eficientemente o maior tamanho de fatia possível, garantindo que todas as pessoas recebam uma fatia e minimizando o desperdício de pão.

## Explicação do Código (Linha por Linha)

```python
def tamanho_maximo_fatia(N, tamanhos_paes):
    """Encontra o tamanho máximo da fatia que pode ser cortada para atender a todos.

    Args:
        N: O número de pessoas a serem atendidas.
        tamanhos_paes: Uma lista com os tamanhos dos pães.

    Returns:
        O tamanho máximo da fatia (inteiro).
    """

    # Define os limites da busca binária
    inicio = 1
    fim = max(tamanhos_paes)

    while inicio <= fim:
        meio = (inicio + fim) // 2
        fatias_obtidas = sum(tamanho // meio for tamanho in tamanhos_paes)

        if fatias_obtidas >= N:
            inicio = meio + 1  # Tenta um tamanho maior
        else:
            fim = meio - 1  # Precisa de um tamanho menor

    return fim  # O último tamanho válido encontrado é o máximo


# Lê os dados de entrada
N = int(input())
K = int(input())
tamanhos_paes = list(map(int, input().split()))

# Calcula e imprime o resultado
tamanho_maximo = tamanho_maximo_fatia(N, tamanhos_paes)
print(tamanho_maximo)
```

1. **Definição da Função (`def tamanho_maximo_fatia(N, tamanhos_paes):`)**
   * Define uma função chamada `tamanho_maximo_fatia` que recebe dois argumentos:
     * `N`: o número de pessoas a serem atendidas.
     * `tamanhos_paes`: uma lista contendo os tamanhos de cada pão.
   * A função retorna o tamanho máximo da fatia que pode ser cortada.
2. **Limites da Busca Binária (`inicio = 1; fim = max(tamanhos_paes)`)**
   * Inicializa duas variáveis:
     * `inicio`: o menor tamanho possível da fatia (1 cm).
     * `fim`: o maior tamanho possível da fatia (o tamanho do maior pão).
3. **Loop da Busca Binária (`while inicio <= fim:`)**
   * Inicia um loop que continua enquanto o valor de `inicio` for menor ou igual ao valor de `fim`.
4. **Cálculo do Ponto Médio (`meio = (inicio + fim) // 2`)**
   * Calcula o ponto médio do intervalo de busca e armazena em `meio`. A divisão inteira (`//`) garante um resultado inteiro.
5. **Cálculo das Fatias Obtidas (`fatias_obtidas = sum(tamanho // meio for tamanho in tamanhos_paes)`)**
   * Calcula o número total de fatias que podem ser obtidas de todos os pães se cada fatia tiver o tamanho `meio`.
   * A expressão `tamanho // meio` calcula quantas fatias de tamanho `meio` cabem em um pão de tamanho `tamanho`.
   * A função `sum` soma o número de fatias obtidas de todos os pães.
6. **Ajuste do Intervalo de Busca (`if fatias_obtidas >= N: ... else: ...`)**
   * Verifica se o número de fatias obtidas (`fatias_obtidas`) é suficiente para atender todas as pessoas (`N`).
     * Se for suficiente, o tamanho da fatia pode ser maior. O valor de `inicio` é atualizado para `meio + 1`, descartando a metade inferior do intervalo de busca.
     * Se não for suficiente, o tamanho da fatia precisa ser menor. O valor de `fim` é atualizado para `meio - 1`, descartando a metade superior do intervalo de busca.
7. **Retorno do Resultado (`return fim`)**
   * Após o término do loop, o valor de `fim` representa o maior tamanho de fatia válido encontrado. A função retorna esse valor.
8. **Leitura da Entrada (`N = int(input()); K = int(input()); tamanhos_paes = list(map(int, input().split()))`)**
   * Lê os dados de entrada:
     * `N`: o número de pessoas.
     * `K`: o número de pães.
     * `tamanhos_paes`: uma lista contendo os tamanhos de cada pão.
9. **Cálculo e Impressão do Resultado (`tamanho_maximo = tamanho_maximo_fatia(N, tamanhos_paes); print(tamanho_maximo)`)**
   * Chama a função `tamanho_maximo_fatia` para calcular o tamanho máximo da fatia.
   * Imprime o resultado na saída padrão.
