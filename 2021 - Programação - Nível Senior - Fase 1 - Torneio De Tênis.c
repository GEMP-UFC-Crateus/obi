#include <stdio.h>
#include <stdlib.h>

int main(){
    int vitorias = 0, derrotas = 0, i;
    //vator de 6 posições que vai receber vitorias ou derrotas
    char resultado[6];
    //percorrer todo o vetor e preencher ele, depois verifico se foi V, caso positivo eu acrescento 1 na variavel vitorias, caso contrario acrescento 1 na variavel derrotas
    for(i = 0; i < 6; i++){
        scanf("%s", &resultado[i]);
        if(resultado[i] == 'V'){
            vitorias++;
        }else{
            derrotas++;
        }
    }
    //os casos se tiver 5 ou 6, 3 ou 4, 1 ou 2, 0
    if(vitorias == 5 || vitorias == 6){
        printf("3\n");
    }else if(vitorias == 3 || vitorias == 4){
        printf("2\n");
    }else if(vitorias == 2 || vitorias == 1){
        printf("1\n");
    }else{
        printf("-1\n");
    }
    return 0;
}