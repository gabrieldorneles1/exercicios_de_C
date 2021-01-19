#include <stdio.h>

int main(){

    //Variaveis
    float altura, peso_ideal;
    char sexo;

    //Entradas
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    gets(stdin);
    printf("informe o sexo m/f: ");
    scanf("%c", &sexo);

    //Processamento
    if (sexo == 'm'){
        peso ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
    if(sexo == 'f'){
       peso ideal = (62.1 * altura) - 44.7;
       printf("Seu peso ideal é %.2f", peso_ideal);
    }
    if(sexo != 'm' && sexo != 'f'){
        printf("Sexo não reconhecido. \n");
    }

}
