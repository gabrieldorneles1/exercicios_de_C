#include <stdio.h>

int main(){
    //Vari�veis
    float indice;

    //Entradas
    printf("Informe o �ndice de polui��o: ");
    scanf("%f", &indice);

    //Processamento
    if(indice >= 0.3 && indice < 0.4){
        printf("Aten��o: Industrias do 1o grupo devem suspender as atividades.");
    }else if(indice >= 0.4 && indice < 0.5){
        printf("Aten��o: Industrias do 1o e 2o grupos devem suspender as atividades.");
    }else if(indice >= 0.5){
        printf("Aten��o: todos os grupos devem suspender as atividades.");
    }
}
