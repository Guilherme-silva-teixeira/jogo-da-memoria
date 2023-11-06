#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

#define N 8
#define C 64

void imprimir()
{
	system("color a");
	printf("\n\n\n             +___________________________________+\n");
	printf("             |   Bem vindo ao jogo da memória    |\n");
	printf("             |___________________________________|\n\n");
}

void ImprimirMenu()
{
	system("color a");
	printf("\n\n\n                      +---------------------+\n");
	printf("                      |       [opções]      |\n");
	printf("                      +---------------------+\n");
	printf("                      |       [1] JOGAR     |\n");
	printf("                      |       [2] SAIR      |\n");
	printf("                      +---------------------+\n\n");
}

int EscolherScan(int opcao)
{
	printf("Opção: ");
	scanf("%d",&opcao);
	return opcao;
}



int main(void)
{
	char nome[30] , mat[N][N], vetor[C] , jogada[2][2];
	int i , j , c , n , op , pts = 0 , t = 10;
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");
	fflush(stdin);
	
	imprimir();
	system("pause");
	system("cls");
	ImprimirMenu();
	system("pause");
	op = EscolherScan(op);
	
	switch (op)
	{
		case 1:
			
			break;
			
		case 2:
			
			break;
			
		default:
			
		printf("\nOpção inválida\n");
	}
	return 0;
}
