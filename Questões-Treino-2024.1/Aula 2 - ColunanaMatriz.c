#include <stdio.h>

int main() {
    /* pegando coluna e operação (soma ou media) */
    int coluna;
    char operacao;
    scanf("%d %c", &coluna, &operacao);

    /* instanciando a matriz e a soma que começa em zero */
    double matriz[12][12];
    double soma = 0.0;

    /* Faço a soma de toda a coluna que me foi pedida */
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);

            if (j == coluna) {
                soma += matriz[i][j];
            }
        }
    }

    /* Imprimo o resultado, caso seja soma eu mando imprimo direto, caso seja media eu divido por 12 */
    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}

/* exemplo de teste */
/* 1
S
23
-8
-93
46
84
-94
-56
-88
20
-15
-8
44
-38
-88
-63
-96
-30
82
70
-10
1
-6
-16
-8
-38
-40
-99
83
19
66
-47
-9
71
17
-21
59
-16
35
49
92
-70
39
10
41
67
-60
92
-31
45
13
-86
-87
91
29
-3
4
-19
27
29
60
14
-29
33
91
97
-67
73
94
86
41
-44
79
13
5
60
7
64
-98
34
-24
11
-2
-36
-1
-75
24
-51
88
-79
93
-6
-38
-48
34
-27
15
-68
91
2
-87
-7
-90
76
-66
47
92
-52
-22
10
-21
-29
68
-17
-26
-76
-92
-5
91
98
19
60
91
-20
80
80
-93
73
98
-30
-69
93
-73
-2
-67
52
36
-38
-64
70
28
2
-72
53
-67 */