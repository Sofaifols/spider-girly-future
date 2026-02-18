#include <stdio.h>
//definindo a estrutura do tipo Aluno
typedef struct {
    char nome[50];
    int idade;
    float media;
}Aluno;
int main(){
    //criando uma váriavel do tipo Aluno  
    Aluno aluno1 = {"jão", 20, 8.5};
    Aluno aluno2 = {"sof", 30, 9};

    //exibindo os dados do aluno
    printf("Aluno 1: %s,  \nIdade: %d, \nMédia: %.2f", aluno1.nome, aluno1.idade, aluno1.media);
    printf("\nAluno 2: %s, \nIdade: %d, \nMédia: %.2f", aluno2.nome, aluno2.idade, aluno2.media);
    return 0;
}

//declarar o aluno e acessar seus campos 
//struct Aluno a1;
//a1.idade = 20;
