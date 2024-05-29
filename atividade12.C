#include <stdio.h>
#include <stdlib.h>


void cadastro_Alunos () {
	
	int i;
	
	char nome [5];
	
	int notas [20];
	
	float media1 = notas [0]+notas [1]notas [3]+/4;
	
	float media2 = notas [5+6+7+8]/4;
	
	float media3 = notas [9+10+11+12]/4;
	
	float media4 = notas [13+14+15+16]/4;
	
	float media5 = notas [17+18+19+20]/4;
	
	for (i = 0; i < 5; i++) {
	
	
	printf("diga o nome dos alunos\n");
		scanf("%s", &nome[i]);	
	
}
system("pause");
system("cls");
	for (i = 0; i<20; i++){
	
	printf("digite a notas dos alunos\n");
		scanf("%i", &notas[i]);
		
		
		
	}
	system("pause");
	system("cls");
		printf("a media dos alunos e\n %f", media1 );
		
}

int main() {
system("color A");	
	
	
	int opcao;
	

	while ((opcao != 1) && (opcao !=2) && (opcao != 3)) {		
		// opcoes do menu
		system("cls");
		printf("Bem vindo ao meu sistema\n\n");
		printf("Menu\n");
		printf("----\n");
		printf("1-Cadastro de Notas/Alunos\n");
		printf("2-Alteracao de Notas/Alunos\n");
		printf("3-Sair\n");
		printf("Opcao: ");
		scanf("%i",&opcao);
		// verificando as opcoes
		if (opcao == 1) {
			system("cls");
			
			printf("CADASTRO DE ALUNOS\n\n");
			
			cadastro_Alunos (); 
		}
}

}
