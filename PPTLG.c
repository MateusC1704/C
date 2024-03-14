#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int jogador,bot,continuar,e;
	
	do {
	system("cls");
	printf("- - - - - - - - Pedra, Papel, Tesoura, Lagarto, Spock - - - - - - -\n- - - - - Jogo original criado por Sam Kass e Karen Bryla - - - - -\n");
	printf("\n1 - Pedra\n2 - Papel\n3 - Tesoura\n4 - Lagarto\n5 - Spock\n\n0 - Ajuda\n\nFaça sua escolha (1-5): ");
	scanf("%d",&jogador);

	while(jogador==0)	{
		printf("\n-Tesoura corta papel\n-Papel cobre pedra\n-Pedra esmaga lagarto\n-Lagarto envenena Spock\n-Spock esmaga tesoura\n-Tesoura decapita Lagarto\n-Lagarto come papel\n-Papel refuta Spock\n-Spock vaporiza pedra\n-Pedra amassa tesoura");
		printf("\nFaça sua escolha (1-5): ");
		scanf("%d",&jogador);
	}

	if(jogador==1) printf("\nVocê escolheu Pedra");
	else if(jogador==2) printf("\nVocê escolheu Papel");
	else if(jogador==3) printf("\nVocê escolheu Tesoura");
	else if(jogador==4) printf("\nVocê escolheu Lagarto");
	else if(jogador==5) printf("\nVocê escolheu Spock");
	
	srand(time(NULL));
	bot=(rand() % 5)+1;

	if(bot==1) printf("\nBot escolheu Pedra\n\n");
	else if(bot==2) printf("\nBot escolheu Papel\n\n");
	else if(bot==3) printf("\nBot escolheu Tesoura\n\n");
	else if(bot==4) printf("\nBot escolheu Lagarto\n\n");
	else if(bot==5) printf("\nBot escolheu Spock\n\n");
	
	if(jogador==bot) printf("\nEmpate!\n");
	else if((jogador==3 && bot==2)||(jogador==2 && bot==1)||(jogador==1 && bot==4)||(jogador==4 && bot==5)||(jogador==5 && bot==3)||(jogador==3 && bot==4)||(jogador==4 && bot==2)||(jogador==2 && bot==5)||(jogador==5 && bot==1)||(jogador==1 && bot==3)) {
		printf("\nVocê venceu!!!\n");
	}
	else printf("\nO bot venceu!\n");
	
	printf("\nDeseja continuar? \n1 - SIM | 2 - NÃO\n ");
	scanf("%d",&e);
	} while (e==1);
	
	system("pause");
	return 0;
}
