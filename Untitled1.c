#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int quantidade_minima, quantidade_maxima;
	float estoque_medio;

	//Entradas
	printf ("Informe a quantidade m�nima: ");
	scanf ("%d", &quantidade_minima);

	printf ("Informe a quantidade m�xima: ");
	scanf ("%d" , &quantidade_maxima);

	//Processamentos
	estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

	//Sa�da
	printf("O estoque m�dio � %f", estoque_medio);

}
