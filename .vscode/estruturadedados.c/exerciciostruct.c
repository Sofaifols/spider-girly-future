/*typedef struct{
    int idade 
    char sex;
    char nome[100];

}Pessoa;*/

/*struct Pessoa2{
    int idade;
    char sexo;
    char nome[100];

}*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h> // biblioteca de string

typedef struct {
    int idade;
    char sexo;
    char nome [100];

}Pessoa;

struct Pessoa2{
    int idade;
    char sexo;
    char nome[100];
};
struct Pessoa3{
    int idade;
    char sexo;
    char nome[100]; //lembrando limite de caracterrrrrrrrrr, pra n estorar memoria uai
};


    /* data */


//existem esses dois tipos(acima) de criar uma struct, agora para chamar são dois tbem(abaixo)

int main(){
    Pessoa pessoa1;
    struct Pessoa2 pessoa2;

    pessoa1.idade = 50;
    pessoa1.sexo = 'M';
    strcpy(pessoa1.nome,"Pedro");  
    //função para copiar string, dois parametros. primeiro: a variavel onde vou salvar a informção e a 
    //segunda o texto que quero salvar
    printf("Nome: %s \n", pessoa1.nome);
    printf("Idade: %d \n", pessoa1.idade);
    printf("Sexo: %c \n", pessoa1.sexo);
     


    Pessoa Pessoa3;
    struct Pessoa3 pessoa3;
     pessoa3.idade = 25;
    pessoa3.sexo = 'M';
    strcpy(pessoa3.nome,"Paola");  
    //função para copiar string, dois parametros. primeiro: a variavel onde vou salvar a informção e a 
    //segunda o texto que quero salvar
    printf("Nome: %s \n", pessoa3.nome);
    printf("Idade: %d \n", pessoa3.idade);
    printf("Sexo: %c \n", pessoa3.sexo);
}