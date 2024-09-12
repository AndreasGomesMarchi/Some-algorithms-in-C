//Ex1 - switch-case (menu)

#include <stdio.h>
#include<stdlib.h>

int main(){
	
	int op;
	int num1, num2, resultado;
	
	do{
		printf("Operacao: \n");
		printf("1 - adicao\n");
		printf("2 - subtracao\n");
		printf("Escolha sua op (1 ou 2): ");
		scanf("%d", &op);
		
		switch (op) {
			case 1:
				printf("Sua opcao foi a adicao!\n");
				
				printf("Num1: ");
				scanf("%d", &num1);
		
				printf("Num2: ");
				scanf("%d", &num2);
				
				resultado = num1 + num2;
				printf("Resultado: %d\n", resultado);
				break;
				
			case 2:
				printf("Sua opcao foi a subtracao!\n");
				
				printf("Num1: ");
				scanf("%d", &num1);
		
				printf("Num2: ");
				scanf("%d", &num2);
				
				resultado = num1 - num2;
				printf("Resultado: %d\n", resultado);			
				break;
							
			default:
				printf("Opcao invalida!\n");
				system("pause");
				system("cls");
				break;
		}
	}while(op == 3 || op == 2);
	
	return 0;
}
