#include <stdio.h>

int main(){
        //Vari�veis
        int numero;

        //Entradas
        printf("Informe um n�mero: ");
        scanf("%d", &numero);

        //Processamento
        if(numero % 2 == 0){
            if(numero > 0){
                printf("O n�mero %d � par e positivo.", numero);
            }else{
                printf("O n�mero %d � par e negativo.", numero);
            }
        }else{
            if(numero > 0){
                printf("O n�mero %d � �mpar e positivo.", numero);
            }else{
                printf("O n�mero %d � �mpar e negativo.", numero);
            }
            }
        }
