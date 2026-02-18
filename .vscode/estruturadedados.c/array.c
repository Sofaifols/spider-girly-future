#include <stdio.h>
#include <stdlib.h>

//como criar vetor?

int main(){
    int i;
    //char sexo;
    //float n1;

    //int num1[10]; // tipo de dado da variável, um identificador(nome), e colchetes o tamanho do conjunto. uma das formas
    int num2 [10];
   // int num3[5] = {2,5,9}; // o vetor prioriza sempre o que tá no colchete, e nesse exemplo ele completa com o 0
    //int num4[4] = {1,2,3,4,5,6}; //como ele prioriza o n^ que ta no colchete, se tiver um número a mais é perdido

   // char letra[100];
    /*char vogais [5] = {'a', 'e', 'i', 'o', 'u'};
    float notas [3] = {4.3, 5.7, 9.7};
    for (i = 0; i <5; i++)
        printf("%d ", num2[i]);
    printf("\n\n");
    for( i = 0; i<5; i++)
        printf("%c ", vogais[i]);
    printf("\n\n");
    for(i=0; i <3; i++)
        printf("%.2f ", notas[i]);
*/

for (i = 0; i< 10; i++){
    printf("Digite o elemento da posição %d: ", i);
    scanf("%d", &num2[i]);
}

printf("\n \n");
for ( i=0; i< 10; i++)
    printf("%d", num2[i]);
printf("\n\n");
}