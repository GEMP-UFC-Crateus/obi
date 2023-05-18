#include <stdio.h>

int main()
{
    //Declarando as quatro variáveis que usaremos nesse problema.
    //Não existe uma ordem pré estabelecida entre os filhos 1, 2 e 3. 
    int idade_monica, idade_filho1, idade_filho2, idade_filho3;
    //Lendo a idade da dona Mônica e as idades de dois de seus filhos.
    scanf("%d", &idade_monica);
    scanf("%d", &idade_filho1);
    scanf("%d", &idade_filho2);
    //Idade da dona Mônica é igual a soma da idade dos seus três filhos.
    //Assim, para descobrir a idade do terceiro filho, basta fazer a 
    //subtração entre a idade da dona Mônica e a soma da idade dos seus dois outros 
    //filhos.
    idade_filho3=idade_monica-(idade_filho1+idade_filho2);
    //Agora veremos qual dos três filhos é o mais velhos através da comparação 
    //direta entre as suas idades.
    
    //Se a idade do filho 3 é maior que a idade do filho 2 e que a idade do filho 1, 
    //então o filho 3 é o mais velho.
    if (idade_filho3>=idade_filho1 && idade_filho3>=idade_filho2){
        printf("%d",idade_filho3);
    }
    //Caso contrário, verificaremos os filhos 2 e 1.
    else{
    //Se a idade do filho 2 é maior que a idade do filho 3 e que a idade do filho 1, 
    //então o filho 2 é o mais velho.
        if (idade_filho2>=idade_filho1 && idade_filho2>=idade_filho3){
           printf("%d",idade_filho2);
        }
        //Se nenhuma das consições dois dois últimos if's foram atendidas, 
        //isso significa que o filho mais velho é o filho 1.
        else {
            printf("%d",idade_filho1);
        }
    }
    return 0;
}