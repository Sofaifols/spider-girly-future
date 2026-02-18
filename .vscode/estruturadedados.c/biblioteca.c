#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//obejtivo: implementar o cadastro e a listagem de livros usando um array estatico. com foco em struct, entrada/saida de dados e organização básica


//constantes globais
#define MAX_LIVROS 50
#define TAM_STRING 100
//typedef

//definição da estrutura struct
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora [TAM_STRING];
    int edicao;
}
//função para limpar o buffer de entrada
void limparBufferEntrada(){
    int c;
    while ((c = getchar())!= '\n' && c != EOF);

} 
 //funçao principal
 int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;
 }

 // laçço principal do menur
 do {
     printf("=============\n");
     printf("       BIBLIOTECA - PARTE 1\n");
     printf("=============\n");
     printf("1- Cadastrar um novo livro\n");
     printf("2- Listar todos os livros\n");
     printf("3- SAIR \n");
     printf("----------------------\n");
     printf("Escolha uma opção: ");


scanf("%d", opcao);
limparBufferEntrada(); //limpa a linha/espaço deixado pelo scanf
 switch (opcao)
    case 1: 
    printf("-----Cadastro de livros -----\n \n ");

        if(totalLivros <MAX_LIVROS) {
            printf("Digite o nome do livro:\n");
            fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

            printf("Digite o autor: \n");
            fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

            printf("Digite a editora: \n");
            fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

            biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
            biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")]='\0';
            biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

            printf("Digite o número da edição: ");
            scanf("%d", &biblioteca[totalLivros].edicao);
            limparBufferEntrada();

            totalLivros++;

            printf("\nLivro cadastrado com sucesso!");
        } else {
            printf("Biblioteca cheia! Não é possível cadastrar mais livros.\n ");
        }


            
        }


 }