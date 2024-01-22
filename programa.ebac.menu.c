#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 


int registro()

{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];

	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); 
	
	FILE *file; 
	file = fopen(arquivo, "w");
	fprintf(file,cpf); 
	fclose(file);  
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
	system("read");

}

int consulta()

{
	setlocale(LC_ALL, "Portuguese");

	char cpf [40];
    char conteudo[200];

    printf ("Digite o cpf a ser consultado: ");
    scanf ("%s", cpf);

    FILE *file;
	file = fopen (cpf, "r");

	if(file == NULL)
	{
		printf ("Não foi possivel abrir o arquivo, não localizado :");
	}

	while (fgets(conteudo, 200, file) !=NULL)
	{
		printf("\nessas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
}

int deletar()
{
	char cpf[40];

	printf("Digite o cpf a ser deletado: ");
	scanf("%s", cpf);

	remove(cpf);

	FILE *file;
	file = fopen(cpf, "r");

	if(file == NULL)
	{
		printf("usuario não se encontra no sistema!. ");
		syetem("read");
	}


}

	
int main()

	{
	int opcao=0; 
	int laco=1;
	
	for(laco=1;laco=1);
	

	{

		system("clear");

		setlocale(LC_ALL, "Portuguese"); 
			
		printf("### Cartório da EBAC ###\n\n"); 
		printf("Escolha a opção desejada do menu\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n"); 
		printf("Opção: ");
				
		scanf("%d", &opcao); 
		
		system("cls");
	
		switch(opcao) 
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
		
			case 3:
			deletar();
			break;
		
			default:
			printf("Essa opção não está disponivel!\n");
			system("pause");
			break;

		
		} 
        
			
	}	
}