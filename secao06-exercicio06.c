#include <stdio.h>

int main (){
    //Vari�veis
    int c;
    float n, e = 0, salario, valor_hora = 10.00;

    //Entradas
    printf("Informe o C�digo: ");
    scanf("%d", &c);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &n);

    //Processamento
    if(n > 50){
        e = (n - 50) * 20.00;
        salario = (50 * valor_hora) + e;
        //Sa�das
        printf("Sal�rio total R$ %.2f\n", salario);
        printf("Sal�rio excedente R$ %.2f", e);
    }else{
        salario = n * valor_hora;
        printf("Sal�rio total R$ %.2f\n", salario);
        printf("Sal�rio excedente R$ %.2f", e);


    }

}
