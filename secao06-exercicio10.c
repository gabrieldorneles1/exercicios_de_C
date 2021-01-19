#include <stdio.h>

int main(){
        //Variáveis
        int idade;

        //Entradas
        printf("Informe sua idade: ");
        scanf("%d", &idade);

        //Processamento
        if(idade >= 5 && idade <= 7){
            printf("Infantil A");
        }else if(idade >= 8 && idade <= 11){
            printf("Infantil B");
        }else if(idade >= 12 && idade <= 13){
            printf("Juvenil A");
        }else if(idade >= 13 && idade <= 17){
            printf("Juvenil B");
        }else if(idade > 18){
            printf("Adulto");

        }
}
