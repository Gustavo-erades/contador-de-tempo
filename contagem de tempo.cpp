#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <windows.h>
int main(void){
	int unsigned CPAGE_UTF8=65001;
	int unsigned CPAGE_DEFAULT=GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	
	char texto[255];
	int Hour,Minute,Second;
	system("color 09");
	printf("\a\t************\n");
	printf("\t* CONTADOR *\n");
	printf("\t*    DE    *\n");
	printf("\t*  TEMPO   *\n");
	printf("\t************");
	printf("\nQual seu nome?\n\t ");
	
	setbuf(stdin,0);
	fgets(texto,255,stdin);
	texto[strlen(texto)-1]='\0';
	
	for(Hour=0;Hour<24;Hour++)
		for(Minute=0;Minute<60;Minute++)
			for(Second=0;Second<60;Second++){
				printf("\n%s, já se passou tanto tempo:\n",texto);
				printf("\t  %d:%d:%d \n", Hour,Minute,Second);
				
				Sleep(1000);//pausa o processamento em 1000 milissegundos
							//vai controlar a velocidade do contador
				system("cls");//limpa a tela
								//impede que sejam imprimidos novos relógios a cada segundo
				}
	system("pause");
	SetConsoleOutputCP(CPAGE_DEFAULT);
}