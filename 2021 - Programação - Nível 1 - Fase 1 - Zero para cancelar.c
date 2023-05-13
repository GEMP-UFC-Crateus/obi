#include <stdio.h>

int main()
{
    int n;//Quantidade de números a serem ditos pelo chefe
    scanf("%d",&n);
    int vetor[n];//Vetor que armazenará os n números ditos pelo chefe
    for (int i=0;i<n;i++){
        scanf("%d", &vetor[i]);//Em cada posição i do vetor, armazena um número dito pelo chefe
        if (vetor[i]==0){//Se o número dito pelo chefe for o zero...
            int j=i-1;
            while (vetor[j]==0){//...percorreremos o vetor da posição corrente até o início
            //procurando pela primeira posição cujo conteúdo seja diferente de zero. 
            //Ou seja, procurando o último número diferente de zero que foi dito pelo chefe
            //e que ainda não foi corrigido
                j--;
            }
            //Quando o laço chega a uma posição j do vetor cujo conteúdo é diferente do zero, 
            //o laço é encerrado.
            vetor[j]=0;//O número encontrado é então corrigido de forma que não interfira na soma
        }
    }
    //Nesse ponto do algoritmo, todos os números ditos de maneira errada pelo chefe já foram devidamente corrigidos.]
    //Então podemos começar o processo de soma.
    int soma=0;//Criamos uma variável que irá acumular o valor da soma, sendo inicializada pelo elemento neutro da adição.
    for (int i=0;i<n;i++){//Percorremos todos os elementos do vetor somando os seus valores.
    //Lembrando que os valores ditos de maneira errada pelo chefe já foram corrigidos.
        soma+=vetor[i];
    }
    printf("%d\n", soma);//Apresentamos o valor da soma das vendas.
    return 0;
}