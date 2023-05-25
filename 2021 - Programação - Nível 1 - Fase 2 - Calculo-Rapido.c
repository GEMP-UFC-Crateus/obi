#include <stdio.h>

int main(){
    int s, a, b;
    int i, j, k;
    int soma = 0;
    int cont = 0;

    //enquanto a entrada for diferente de EOF, pegamos os 3 valores e atribuimos a s,a,b, depois meu i vai de a <= b;
    while(scanf("%d %d %d", &s, &a, &b) != EOF){
        //interando os todos os inteiros no intervalo [a,b]
        for(i = a; i <= b; i++){
            soma = 0;
            j = i;
            //fazendo o caculo e incrementando o valor de soma enquanto o j != 0;
            while(j != 0){
                k = j % 10;
                soma += k;
                j = j / 10;
            }
            //Se a soma dos dígitos for igual a s, o programa incrementa uma variável contadora cont.
            if(soma == s){
                cont++;
            }
        }
        //imprimos o valor
        printf("Temos %d no intervalo dado têm a soma de dígitos indicada.\n", cont);
        //Zeramos o contador, pois ele só vai parar quando a entrada for EOF
        cont = 0;
    }

    return 0;
}