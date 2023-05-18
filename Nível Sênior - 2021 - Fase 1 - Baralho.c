#include <stdio.h>

int main()
{
    int i, digito, contador, bandeira;
    char entrada[156];
    
    //Vetores que armazeranão, em cada posição, a quantidade de cartas com determinado 
    //valor e naipe foram identificadas.
    //Por exemplo: espadas[3]=5 significa que foram identificadas 5 cartas de 3 de Espadas.
    //Não usaremos a posição 0 de cada um dos vetores. Por isso que precisaremos de 14 
    //posições em cada vetor: a posição 0 e 1 a 13 para cada uma das 13 cartas.
    int copas[14];
    int espadas[14];
    int paus[14];
    int ouros[14];
    
    //Inicialmente, nenhuma carta foi identificada. Então todos os vetores começarão zerados.
    for(i=0;i<=14;i++){
        copas[i]=0;
        espadas[i]=0;
        paus[i]=0;
        ouros[i]=0;
    }
    //Lendo a string de entrada e armazendo no vetor de caracteres "entrada".
    scanf("%s", entrada);
    
    //Percorreremos o nosso vetor com a entrada em grupos de três em três onde 
    //os dois primeiros caracteres correspondem ao número da carta e 
    //o terceiro caracter corresponde ao naipe da carta.
    for(i=0;i<=155;i+=3){
        //A variável dígito converterá o valor da carta (inicialmente dada como caractere) 
        //para inteiro. 
        //A cada iteração do laço, analisaremos um novo grupo e calcularemos o número da carta 
        //para esse grupo.
        digito=0;
        
        //Para transformar um caracter no número inteiro correspondente àquele caracter, 
        //fazemos apenas uma "subtração" entre o caracter em questão e o caracter '0' 
        //e então atribuímos esse valor a uma variável inteira.
        //Por exemplo: '7' => '7'-'0' resultará numa diferença de 7 unidades. 
        //Esse valor será atribuído a uma variável inteira.
        
        digito=(entrada[i]-'0')*10 + (entrada[i+1]-'0');

        //Seguindo o sistema posicional, o primeiro dígito da carta tem peso 10 enquanto o 
        //segundo dígito tem peso unitário. 
        //Exemplo: "13" = '1'*10 + '3' = 13

        //Feito o processo de conversão, agora veremos a qual vetor/naipe a carta pertence.
        //Se o naipe da carta for 'C', então ela pertence ao vetor de "copas".
        if (entrada[i+2]=='C'){
            //Vamos até a posição correspondente ao valor da carta e incrementamos uma unidade.
            //Por exemplo: Se no grupo em análise temos "09C", vamos até copas[9] e 
            //acrescentamos uma unidade para indicar que vimos mais uma carta 9 de copas.
            //O mesmo vale para os demais valores de carta e naipes.
            copas[digito]+=1;}
        if (entrada[i+2]=='E'){
            espadas[digito]+=1;}
        if (entrada[i+2]=='P'){
            paus[digito]+=1;}
        //Lembrando que o naipe de Ouros é representado pelo caracter 'U' nesse problema.    
        if (entrada[i+2]=='U'){
            ouros[digito]+=1;}
        }
     
    //Agora faremos a contabilidade de quantas cartas temos de cada naipe.
    //Também verificaremos se temos carta repetida.
    //Se uma determinada posição de um vetor armazena um valor maior do que 1, 
    //isso indica que temos mais do que uma carta com aquele valor e naipe.
    //Por exemplo: ouros[7]=3 => Temos 3 cartas de 7 de ouros.
    
    //Para identificar essa situação em cada naipe, utilizaremos uma variável especial 
    //chamada "bandeira". 
    //Para cada naipe, inicialmente, bandeira terá valor 1. 
    //Se encontrarmos mais de uma carta com o mesmo valor dentro de um naipe, 
    //então bandeira recebe 0. 
    
    //A variável contador contará a quantidade de cartas que estão faltando naquele naipe.
    //Exemplo: paus[8]=0 => significa que não foi identificada a carta 8 de paus. 
    //Nesse caso, o contador será incrementado.
    
    //Contabilizando para o naipe de copas
    contador=0;
    bandeira=1;
    //Não utilizamos o valor 0. O objetivo é fazer uma associação direta entre o 
    //valor da carta e a posição do vetor.
    for (i=1;i<=13;i++){
        //Se temos mais de uma carta com o mesmo valor dentro do naipe, então bandeira recebe 0.
        //Note que bandeira só recebe 0 nesse caso: quando temos carta repetida no naipe.
        if (copas[i]>1){bandeira=0;}
        else{
            //A variável contador está acumulando a quantidade de cartas ausentes no naipe.
            if (copas[i]==0){contador+=1;}
        }
    }
    //Bandeira começou com o valor 1. 
    //Se bandeira terminou com o valor 0, significa que necessariamente temos carta repetida 
    //no naipe.
    if (bandeira==0){
        //Se bandeira igual a 0, informamos o erro.
        printf("erro\n");}
    else {printf("%d\n",contador);}//Caso contrário, informamos o número de cartas ausentes.

    //O mesmo vale para os demais naipes.

    //Contabilizando para o naipe de espadas
    contador=0;
    bandeira=1;
    for (i=1;i<=13;i++){
        if (espadas[i]>1){bandeira=0;}
        else{
            if (espadas[i]==0){contador+=1;}
        }
    }
    
    if (bandeira==0){
        printf("erro\n");}
    else {printf("%d\n",contador);}  
    
    //Contabilizando para o naipe de ouros
    contador=0;
    bandeira=1;
    for (i=1;i<=13;i++){
        if (ouros[i]>1){bandeira=0;}
        else{
            if (ouros[i]==0){contador+=1;}
        }
    }
    
    if (bandeira==0){
        printf("erro\n");}
    else {printf("%d\n",contador);}     
    
    //Contabilizando para o naipe de paus
    contador=0;
    bandeira=1;
    for (i=1;i<=13;i++){
        if (paus[i]>1){bandeira=0;}
        else{
            if (paus[i]==0){contador+=1;}
        }
    }
    
    if (bandeira==0){
        printf("erro\n");}
    else {printf("%d\n",contador);}  
    
    return 0;
}