#include <stdio.h>

int main(){
    //Vari�veis
    int vetor[20], soma = 0;

    //Entradas
    for(int i = 0; i< 20; i++){
        printf("Informe o valor para o vetor %d\20: ", (i+1));
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("Soma do vetor � %d", soma);
}
