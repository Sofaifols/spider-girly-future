#include <stdio.h>      //biblioteca de printf (entrada e saida de dados)
#include <string.h>     //biblioteca para manipular sting(strcspn)

// programinha basic para simular uma "ligação", para treinar ponteiro, função e struct

#define MAX 5 // número maximo de contatos que podem ser salvos


//struct Contato, lembrar de usar typedeffffffffffff

typedef struct {
    char nome[50];
    char numero[14];
} Contato;      //nome da struct sempre com letra maiuscula


// agr a função para cadastrar o contato, com ponteiro. vou usar void tbem

void cadastrarContato(Contato *c) {
    printf("Digite o nome: ");
        fgets(c->nome, 50, stdin); //le o nome e salva na memoria do contato, stdin eh a entrada padrão, ou seja,o teclado

    c->nome[strcspn(c->nome, "\n")] = '\0';  //remove o espaço que o fgets calcula/coloca autoimaticamente no enter
    
    printf("Digite o número: ");
        fgets(c->numero,14,stdin);

    c->numero[strcspn(c->numero, "\n")]= '\0';  //remove o enter tbem


}

void listarContatos(Contato contatos[], int total) {
    //contatos[] é um vetor de struct e total é o tanto que já foi cadastrado, o vetor meio que é um ponteiro internamente

    for ( int i=0; i<total; i++) {
        pritnf("%d - %s\n", i + 1, contatos[i].nome);
        //mostra o indice da lista +1 e o nome do contato
    }
}

void ligarContato (Contato *c) { //recebe o enderecço do contato escolhido

    printf("Ligando para %s (%s)...", c-> nome, c->numero);
    //acessa o nome e numero usando -> 


}
int main(){
    Contato contatos[MAX];
    //criei um vetor de structs Contato, é como a memoria do celular

    int total =0;
    //guarda quantos numeros já foram cadastrados
    int opcao;
    //variavel pra controlar o menu

do {
    //menuuuuuuuuuuuu
    printd("\n Cadastrar contato\n");
}
}


