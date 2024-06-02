### Problema de Reconstrução de Distâncias Exploras na Caverna Subaquática

#### O Problema

Um grupo de amigos decidiu explorar a caverna subaquática Ordinskaya, na Rússia, e utilizaram uma fita métrica para marcar o caminho explorado e garantir um retorno seguro. No entanto, devido à anotação incorreta de alguns dados (em metros), eles precisam da nossa ajuda para reconstruir a sequência correta das distâncias exploradas.

##### Entradas:

1. Dois inteiros \( N \) e \( M \) representando o número de mergulhos e o comprimento da fita métrica em metros, respectivamente.
2. Uma lista de \( N \) inteiros \( A_1, A_2, ...\, A_N \) representando as anotações feitas após cada mergulho.

##### Saída:

O programa deve imprimir um único inteiro, representando a menor soma das distâncias exploradas que é possível, considerando as anotações. Se não for possível reconstruir uma sequência válida, deve-se imprimir `-1`.

### Exemplos Detalhados

#### Exemplo 1:

**Entrada**:

```
5 7
2 5 3 6 0
```

**Saída**:

```
24
```

**Passo a Passo**:

1. **Inicialização**:

   - `total_sum = 0`
   - `last_distance = 0`
2. **Processando cada anotação**:

   - **Primeira anotação (2)**:

     - Possíveis distâncias: `distancia1 = 2` e `distancia2 = 5` (porque 7 - 2 = 5)
     - Ambas são válidas (≥ `last_distance`).
     - Escolhemos a menor: `menor_valido = 2`
     - Atualizamos: `total_sum += 2` → `total_sum = 2`
     - Atualizamos: `last_distance = 2`
   - **Segunda anotação (5)**:

     - Possíveis distâncias: `distancia1 = 5` e `distancia2 = 2` (porque 7 - 5 = 2)
     - Apenas `distancia1 = 5` é válida (≥ `last_distance`).
     - Escolhemos: `menor_valido = 5`
     - Atualizamos: `total_sum += 5` → `total_sum = 7`
     - Atualizamos: `last_distance = 5`
   - **Terceira anotação (3)**:

     - Possíveis distâncias: `distancia1 = 3` e `distancia2 = 4` (porque 7 - 3 = 4)
     - Apenas `distancia2 = 4` é válida (≥ `last_distance`).
     - Escolhemos: `menor_valido = 4`
     - Atualizamos: `total_sum += 4` → `total_sum = 11`
     - Atualizamos: `last_distance = 4`
   - **Quarta anotação (6)**:

     - Possíveis distâncias: `distancia1 = 6` e `distancia2 = 1` (porque 7 - 6 = 1)
     - Apenas `distancia1 = 6` é válida (≥ `last_distance`).
     - Escolhemos: `menor_valido = 6`
     - Atualizamos: `total_sum += 6` → `total_sum = 17`
     - Atualizamos: `last_distance = 6`
   - **Quinta anotação (0)**:

     - Possíveis distâncias: `distancia1 = 0` e `distancia2 = 7` (porque 7 - 0 = 7)
     - Apenas `distancia2 = 7` é válida (≥ `last_distance`).
     - Escolhemos: `menor_valido = 7`
     - Atualizamos: `total_sum += 7` → `total_sum = 24`
     - Atualizamos: `last_distance = 7`

Resultado final: `total_sum = 24`

#### Exemplo 2:

**Entrada**:

```
3 5
2 1 2
```

**Saída**:

```
-1
```

**Passo a Passo**:

1. **Inicialização**:

   - `total_sum = 0`
   - `last_distance = 0`
2. **Processando cada anotação**:

   - **Primeira anotação (2)**:

     - Possíveis distâncias: `distancia1 = 2` e `distancia2 = 3` (porque 5 - 2 = 3)
     - Ambas são válidas (≥ `last_distance`).
     - Escolhemos a menor: `menor_valido = 2`
     - Atualizamos: `total_sum += 2` → `total_sum = 2`
     - Atualizamos: `last_distance = 2`
   - **Segunda anotação (1)**:

     - Possíveis distâncias: `distancia1 = 1` e `distancia2 = 4` (porque 5 - 1 = 4)
     - Apenas `distancia2 = 4` é válida (≥ `last_distance`).
     - Escolhemos: `menor_valido = 4`
     - Atualizamos: `total_sum += 4` → `total_sum = 6`
     - Atualizamos: `last_distance = 4`
   - **Terceira anotação (2)**:

     - Possíveis distâncias: `distancia1 = 2` e `distancia2 = 3` (porque 5 - 2 = 3)
     - Nenhuma das distâncias é válida (ambas < `last_distance`).
     - Retorna `-1` pois não há sequência válida.

Resultado final: `-1`

### Algoritmo Guloso Explicado

O algoritmo guloso tenta minimizar a soma das distâncias escolhendo a menor distância possível em cada passo, desde que esta distância não viole a regra de ser maior ou igual à distância anterior. A seguir está o código detalhado:

### Passos do Algoritmo

1. **Leitura da Entrada**:

   - Ler \( N \) e \( M \).
   - Ler as anotações \( A \).
2. **Inicialização**:

   - `total_sum = 0` para acumular a soma das distâncias exploradas.
   - `last_distance = 0` para rastrear a última distância válida.
3. **Construção da Sequência**:

   - Para cada anotação \( A_i \):
     - Calcular as duas possíveis distâncias (a anotação e o complemento em relação ao comprimento da fita).
     - Determinar a menor distância válida que é maior ou igual à última distância válida.
     - Se nenhuma das distâncias é válida, retorna -1.
     - Caso contrário, atualiza a soma e a última distância válida.
4. **Resultado**:

   - Imprimir a soma calculada.

### Código Completo

```python
def calcula_menor_soma(N, M, anotacoes):
    total_sum = 0
    last_distance = 0
  
    for i in range(N):
        distancia1 = anotacoes[i]
        distancia2 = M - anotacoes[i]
      
        if distancia1 >= last_distance or distancia2 >= last_distance:
            if distancia1 >= last_distance and distancia2 >= last_distance:
                menor_valido = min(distancia1, distancia2)
            elif distancia1 >= last_distance:
                menor_valido = distancia1
            else:
                menor_valido = distancia2
              
            total_sum += menor_valido
            last_distance = menor_valido
        else:
            return -1
  
    return total_sum

# Leitura da entrada
N, M = map(int, input().split())
anotacoes = list(map(int, input().split()))

# Calcula e imprime a menor soma das distâncias exploradas
resultado = calcula_menor_soma(N, M, anotacoes)
print(resultado)
```

### Explicação do Código

#### Função `calcula_menor_soma`

Esta função processa a lista de anotações e calcula a menor soma válida de distâncias exploradas:

1. **Inicialização**:

   - `total_sum` é inicializado em 0 para armazenar a soma acumulada das distâncias válidas.
   - `last_distance` é inicializado em 0 para armazenar a última distância válida.
2. **Iteração sobre Anotações**:

   - Para cada anotação \( A_i \), calcula-se `distancia1` (anotação direta) e `distancia2` (o complemento em relação ao comprimento da fita \( M \)).
   - Verifica-se qual das distâncias é válida (maior ou igual à última distância válida).
   - Atualiza-se `total_sum` e `last_distance` com a menor distância válida.
3. **Verificação de Validade**:

   - Se nenhuma das distâncias é válida, retorna -1 indicando que não é possível formar uma sequência válida.
4. **Retorno da Soma**:

   - Ao final, retorna-se a soma total das distâncias válidas.

#### Leitura da Entrada

A leitura da entrada é feita usando `input()` para cada linha:

- Primeira linha: contém \( N \) e \( M \), lidos e convertidos para inteiros.
- Segunda linha: contém as anotações, l
