#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
//alpha 2 - 01/01/2025

int main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int v1,v2,r,result,continua,dif,operacao,numDif,acertos,erros;
	acertos = 0;
	erros = 0;
	
	printf("Dificuldade:\n1-Fácil\t2-Normal\t3-Difícil\t4 - Muito Difícil");
	scanf("%d",&dif);
	//mudar para ñ calcular mais dde 2 casaaas nass vezesss e dxaar divisão só no muito difícil
	if (dif == 1) numDif = 9;
	else if (dif == 2) numDif = 49;
	else if (dif == 3) numDif = 99;
	
	do {
		if (dif != 1){
			operacao = ((rand() % 4) + 1);
		} else operacao = 1;
		
		//fgets(STDIN);
		v1 = ((rand() % numDif) + 1);
		v2 = ((rand() % numDif) + 1);
		
		if(operacao == 1) {
			result = v1+v2;
			printf("Calcule: %d + %d = ",v1,v2);
		}
		else if (operacao == 2) {
			if (v1 < v2){
				int n = v2;
				v2 = v1;
				v1 = n;
			}
			result = v1-v2;
			printf("Calcule: %d - %d = ",v1,v2);
		} else if (operacao == 3) {
			result = v1*v2;
			printf("Calcule: %d x %d = ",v1,v2);
		} else if (operacao == 2) {
			if (v1 < v2){
				int n = v2;
				v2 = v1;
				v1 = n;
			}
			result = v1/v2;
			printf("Calcule: %d / %d = ",v1,v2);
		}	
		scanf("%d",&r);
		
		if (r != result){
			printf("\nResposta incorreta! O resultado é %d",result);
			erros++;
		} else {
			printf("\nPARABÉNS! VOCÊ ACERTOU!");
			acertos++;
		}
		
		printf("\nContinuar? (1 - SIM / 2 - NÃO)");
		scanf("%d",&continua);
	} while (continua != 2);
	
	printf("\nJogadas: %d\nAcertos: %d\nErros: %d",acertos+erros,acertos,erros);
	printf("\n\nDigite qualquer tecla para encerrar o jogo");
	scanf("%d",&continua);
	
	return 0;
}

