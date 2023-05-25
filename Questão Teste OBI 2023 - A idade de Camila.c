#include <stdio.h>

int main() {
    int a, b, c;

    // Solicita as idades das irmãs ao usuário
    printf("Digite a idade de Cibele: ");
    scanf("%d", &a);
    printf("Digite a idade de Camila: ");
    scanf("%d", &b);
    printf("Digite a idade de Celeste: ");
    scanf("%d", &c);

    // Verifica as condições para determinar a idade de Camila
    if ((a >= b && a <= c) || (a <= b && a >= c))
        printf("%d", a);
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        printf("%d", b);
    else
        printf("%d", c);
}