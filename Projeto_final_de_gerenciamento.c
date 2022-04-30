// Projeto Final.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

// Vars Globais.

char endereco [100] [50];
int idade [100];
float salario[100];
char nome [100] [50];
char cargo [100] [50];
int num;
int op = 0;

void cadastrar();
void listar();
void procurar();
void alterar();
void excluir();

int main(){
	
	// Comandos de apoio:
	setlocale(LC_ALL, "Portuguese");
	system("color F0");
	
	do{
		// Come�o dos prints:
		printf("\n#-----------------------------------------------#\n");
		printf("\n#---------GERENCIAMENTO DE FUNCION�RIOS---------#\n");
		printf("\n#-----------------------------------------------#\n");
		printf("\n\nQual opera��o deseja gerenciar?\n");
		printf("\nOp��o 1 = Cadastrar novos funcion�rios.\n");
		printf("\nOp��o 2 = Mostrar a lista de funcion�rios cadastrados.\n");
		printf("\nOp��o 3 = Buscar um funcion�rio espec�fico.\n");
		printf("\nOp��o 4 = Modificar o cadastro/registro de algum funcion�rio.\n");
		printf("\nOp��o 5 = Apagar informa��es relacionadas a um funcion�rio.\n");
		printf("\nOp��o 6 = Encerrar a sess�o.\n");
		
		printf("\nDigite a op��o desejada:\n");
		scanf("%d", &op);
		system("cls");	
	
		switch(op){
			case 1:
				cadastrar();
				break;
			case 2:
				listar();
				break;
			case 3:
				procurar();
				break;
			case 4:
				alterar();
				break;
			case 5:
				excluir();
				break;
		}
	}while(op!=6);
}

// Fun��es.
void cadastrar(){
	int quant;
	int i = 1;
	
	printf("\n#-----------------------------------------------#\n");
	printf("\n#------------CADASTRANDO FUNCION�RIOS-----------#\n");
	printf("\n#-----------------------------------------------#\n\n");
	printf("\nDigite a quantidade de funcion�rios que deseja cadastrar:\n");
	scanf("%d", &quant);
	while(i<=quant){
		printf("\nInsira o nome do funcion�rio:\n ");
		fflush(stdin);
		scanf("%s",&nome[num]);	
		printf("\nInsira a idade do funcion�rio:\n ");
		fflush(stdin);
		scanf("%d",&idade[num]);
		printf("\nInsira o endere�o do funcion�rio:\n ");
		fflush(stdin);
		scanf("%s",&endereco[num]);
		printf("\nInsira o cargo do funcion�rio:\n ");
		fflush(stdin);
		scanf("%s",&cargo[num]);
		printf("\nInsira o sal�rio do funcion�rio:\n ");
		fflush(stdin);
		scanf("%f",&salario[num]);
		i++;
		num++;
	
		printf("\nFuncion�rio(s) cadastrado(s) com sucesso!\n");
		getch();
		system("cls");
		
	}
}

void listar(){
	int i;
	printf("\n#-----------------------------------------------#\n");
	printf("\n#--------MOSTRANDO LISTA DE FUNCION�RIOS--------#\n");
	printf("\n#-----------------------------------------------#\n");
	for(i=0;i<102;i++){
		if(idade[i]>0){
			printf("C�digo do Funcion�rio: %d\nNome: %s\nIdade: %d\nEndere�o: %s\nCargo: %s\nSal�rio: %.2f\n\n",i,nome[i],idade[i],endereco[i],cargo[i],salario[i]);
		} else {

		}
	}
	printf("Pressione ENTER ou ESPA�O para voltar ao menu principal.");
	getch();
	system("cls");
}

void procurar(){
	int proc, cod;
	
	printf("\n#-----------------------------------------------#\n");
	printf("\n#--------------BUSCANDO FUNCION�RIOS------------#\n");
	printf("\n#-----------------------------------------------#\n\n");
	printf("Insira o c�digo do funcion�rio: ");
	scanf("%d",&cod);
		
	if(idade[cod]>0){
		printf("C�digo do Funcion�rio: %d\nNome: %s\nIdade: %d\nEndere�o: %s\nCargo: %s\nSal�rio: %.2f\n\n",cod,nome[cod],idade[cod],endereco[cod],cargo[cod],salario[cod]);
	} else {
		printf("C�digo inexistente!");
	}
	printf("Pressione ENTER ou ESPA�O para voltar ao menu principal.");
	getch();
	system("cls");
}

void alterar(){
	int i,cod,opc;
	
	printf("\n#-----------------------------------------------#\n");
	printf("\n#----MODIFICANDO INFORMA��ES DE FUNCION�RIOS----#\n");
	printf("\n#-----------------------------------------------#\n");
	printf("Insira o c�digo do funcion�rio que deseja alterar as informa��es: ");
	scanf("%d",&cod);
	
	if(idade[cod]>0){
		printf("C�digo do Funcion�rio: %d\n1. Nome: %s\n2. Idade: %d\n3. Endere�o: %s\n4. Cargo: %s\n5. Sal�rio: %.2f\n\n",cod,nome[cod],idade[cod],endereco[cod],cargo[cod],salario[cod]);
		printf("Escolha uma das seguintes op��es para modificar: ");
		scanf("%d",&opc);
		if(opc==1){
			printf("Insira um novo nome para o funcion�rio: ");
			scanf("%s",&nome[cod]);
		}
		if(opc==2){
			printf("Insira uma nova idade para o funcion�rio: ");
			scanf("%d",&idade[cod]);
		}
		if(opc==3){
			printf("Insira um novo endere�o para o funcion�rio: ");
			scanf("%s",&endereco[cod]);
		}
		if(opc==4){
			printf("Insira um novo cargo para o funcion�rio: ");
			scanf("%s",&cargo[cod]);
		}
		if(opc==5){
			printf("Insira um novo salario para o funcion�rio: ");
			scanf("%f",&salario[cod]);
		}
	} else {
		printf("C�digo inexistente!");
	}
	printf("Pressione ENTER ou ESPA�O para voltar ao menu principal.");
	getch();
	system("cls");
}

void excluir(){
	int cod,ctz;
	printf("\n#-----------------------------------------------#\n");
	printf("\n#-----APAGANDO INFORMA��ES DE FUNCION�RIOS------#\n");
	printf("\n#-----------------------------------------------#\n");

	printf("Insira o c�digo do funcion�rio que deseja alterar as informa��es: ");
	scanf("%d",&cod);
	
	if(idade[cod]>0){
		printf("C�digo do Funcion�rio: %d\n1. Nome: %s\n2. Idade: %d\n3. Endere�o: %s\n4. Cargo: %s\n5. Sal�rio: %.2f\n\n",cod,nome[cod],idade[cod],endereco[cod],cargo[cod],salario[cod]);
		printf("Tem certeza que deseja apagar essa conta? [1-Sim/2-N�o]");
		scanf("%d",&ctz);
		
		if(ctz==1){
			idade[cod] = 0;
		}
		
	} else {
		printf("C�digo inexistente!");
	}
	printf("Pressione ENTER ou ESPA�O para voltar ao menu principal.");
	getch();
	system("cls");
}

