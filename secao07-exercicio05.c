#include <stdio.h>
#include <string.h>

int main(){
        //Variaveis
        char nome[100], senha[100];

        //Entradas
        printf("Informe o nome: ");
        gets(nome);
        printf("Informe a senha: ");
        gets(senha);

        //Processamento
        while(!strcmp(nome, senha)){
            printf("Nome de �suario e senha devem ser diferentes.\n");
            printf("Informe o nome: ");
            gets(nome);
            printf("Informe a senha: ");
            gets(senha);
    }
}
