#include <stdio.h>

typedef struct {
	int matricula;
	char nome[30];
	int idade;
} TAluno;

int qt=0;

void insere(TAluno a[]){
	 if (qt<30) {	 //aaa
	 	 printf("\ninforme a matricula:");
	 	 scanf("%d",&a[qt].matricula);
	 	 printf("informe o a idade:");
	 	 scanf("%d", &a[qt].idade);
	 	 printf("informe o nome:");
	 	 scanf("%s", a[qt].nome);
	 	 qt++;
	} else 
		printf("\no vetor esta cheio!");	
}

void exibe(TAluno a[]){
	int i;
	for (i=0;i<qt;i++) {
		printf("\n\n(%d) %s", a[i].matricula, a[i].nome);
	}
}


int main(void) {
TAluno a[30];
int op=0;
	do {
		printf("\n*************************************************\n 1 - insere \n 2 - exibe \n 3 - sair \n informe a opcao:");
		scanf("%d",&op);
		
		switch (op) {
			case 1: 
				insere(a);
				break;
			case 2: 
				exibe(a);
				break;
			case 3:
				printf("\nfim");
				break;
			default: 
				printf("informe uma opcao valida!");
				break;
		}
	} while(op!=3);

	return 0;
}
