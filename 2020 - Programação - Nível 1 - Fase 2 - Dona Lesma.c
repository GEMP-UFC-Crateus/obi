#include <stdio.h>
#include <stdlib.h>

int main(){
    int altura, subida, descida, dias = 0, aux = 0;
    //recebe os valores de altura do muro, quanto ela sobe e desce por dia;
    scanf("%d %d %d", &altura, &subida, &descida);
    //enquanto ela não atingir o topo do muro, ela sobe e desce e acrescenta um dia
    while(aux < altura){
        aux += subida;
        dias++;
        if(aux >= altura){
            break;
        }
        aux -= descida;
    }
    //printf de quantos dias foram necessarios;
    printf("%d\n", dias);
    return 0;
}

