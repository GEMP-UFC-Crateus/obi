
## Análise e Otimização do Problema dos Ogros Marcianos

**Entendendo o Problema**

A questão apresenta um cenário em uma feira de circo marciana, onde ogros participam de um jogo de força. Cada ogro recebe uma premiação com base na faixa de força que alcançou. O objetivo é criar um programa que, dadas as faixas de força e suas respectivas premiações, calcule a premiação de cada ogro com base em suas forças individuais.

**Exemplo 1:**

```python
Entrada:
3 4
3 5
1 4 7
2 3 9 4

Saída:
1 4 7 4
```

* **Interpretação:**
  * 3 faixas de premiação:
    * Força < 3: prêmio 1
    * 3 <= Força < 5: prêmio 4
    * Força >= 5: prêmio 7
  * 4 ogros com forças 2, 3, 9 e 4.
  * Saída: 1 (ogro 1), 4 (ogro 2), 7 (ogro 3), 4 (ogro 4)

**Exemplo 2:**

```python
Entrada:
2 10
4
5 200
1 3 4 5 5 6 2 1 3 4

Saída:
5 5 200 200 200 200 5 5 5 200
```

* **Interpretação:**
  * 2 faixas de premiação:
    * Força < 4: prêmio 5
    * Força >= 4: prêmio 200
  * 10 ogros com forças variadas.
  * Saída: prêmios correspondentes às faixas.

**Exemplo 3:**

```python
Entrada:
10 1
1 2 3 4 5 6 7 8 9
1 10 100 101 102 103 104 105 106 200
5

Saída:
103
```

* **Interpretação:**
  * 10 faixas de premiação, cada uma com um limite e prêmio específicos.
  * 1 ogro com força 5.
  * Saída: 103 (prêmio da faixa onde 4 <= força < 5)

**Observação:**

O programa assume que a entrada está sempre no formato correto, conforme especificado no enunciado do problema. Se houver a possibilidade de entradas inválidas, seria necessário adicionar verificações de erro para garantir o funcionamento adequado do programa.

**Abordagens Possíveis**

Existem diversas maneiras de resolver este problema. Uma delas, como você mencionou, é percorrer todas as faixas de premiação para cada ogro e verificar em qual faixa sua força se encaixa. Essa abordagem, embora funcional, não é a mais eficiente.

**Código Inicial (Menos Eficiente)**

```python
# ... (leitura da entrada)
N, M = map(int, input().split())
limites_faixas = [0] + list(map(int, input().split()))
premios = list(map(int, input().split()))
forcas_ogros = list(map(int, input().split()))

premios_ogros = []
for forca in forcas_ogros:
    for i, limite in enumerate(limites_faixas[1:]):  # Começa do segundo limite
        if forca < limite:
            premios_ogros.append(premios[i])
            break
    else:
        premios_ogros.append(premios[-1])

# ... (impressão dos resultados)
print(*premios_ogros)
```

**Análise da Complexidade do Código Inicial**

Este código possui complexidade de tempo O(N * M), onde N é o número de faixas de premiação e M é o número de ogros. Isso ocorre porque, no pior caso, para cada ogro, precisamos percorrer todas as N faixas para encontrar a correta. Essa abordagem pode se tornar lenta se tivermos um grande número de faixas ou ogros.

**Código Otimizado com Busca Binária**

```python
def busca_binaria(limites, forca):
    inicio, fim = 0, len(limites) - 1
    while inicio <= fim:
        meio = (inicio + fim) // 2
        if forca < limites[meio]:
            fim = meio - 1
        else:
            inicio = meio + 1
    return fim  # Retorna o índice da faixa correta

# Leitura da entrada
N, M = map(int, input().split())
limites_faixas = [0] + list(map(int, input().split()))
premios = list(map(int, input().split()))
forcas_ogros = list(map(int, input().split()))

# Processamento das premiações (com busca binária)
premios_ogros = [premios[busca_binaria(limites_faixas, forca)] for forca in forcas_ogros]

# Impressão dos resultados
print(*premios_ogros)

```

**Análise da Complexidade do Código Otimizado**

A principal otimização está na utilização da busca binária. A busca binária tem complexidade de tempo O(log N), onde N é o número de faixas. Ao usarmos a busca binária para encontrar a faixa correta para cada ogro, a complexidade total do algoritmo se torna O(M log N), que é muito mais eficiente que O(N * M) para grandes valores de N.

**Funcionamento Detalhado do Código Otimizado**

1. **Leitura da Entrada:** O código lê os dados de entrada (número de faixas, número de ogros, limites das faixas, prêmios e forças dos ogros).
2. **Processamento das Premiações:**
   * Uma *list comprehension* é utilizada para percorrer as forças dos ogros (`forcas_ogros`).
   * Para cada força (`forca`), a função `busca_binaria` é chamada para encontrar o índice da faixa de premiação correspondente.
   * O prêmio da faixa encontrada é adicionado à lista `premios_ogros`.
3. **Função `busca_binaria`:**
   * Recebe a lista de limites das faixas (`limites_faixas`) e a força do ogro (`forca`).
   * Utiliza um loop `while` para realizar a busca binária:
     * Calcula o índice do meio da faixa de busca (`meio`).
     * Se a `forca` for menor que o limite no índice `meio`, a busca continua na metade inferior da faixa (`fim = meio - 1`).
     * Caso contrário, a busca continua na metade superior da faixa (`inicio = meio + 1`).
   * O loop termina quando a faixa correta é encontrada ou quando a faixa de busca se esgota.
   * Retorna o índice da faixa correta.
4. **Impressão dos Resultados:** O código imprime os prêmios de cada ogro, separados por espaço.
