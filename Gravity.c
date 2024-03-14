#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int menu,sort,nqr;
	system("color 9");
	printf("\nSorteador de Episódios Gravity Falls\n");
	printf("		-\n	       ---\n              -----\n             -------\n            ---------\n           -----------\n          -------------\n             -------\n            ---------\n           -----------\n          -------------\n         ---------------\n               ---\n               ---\n               ---\n");
	system("color 0");
	srand(time(NULL));
	sort=((rand() % 39) + 1);
	
	if(sort==1) printf("S01E01 - Armadilha para turistas");
	else if(sort==2) printf("S01E02 - A lenda do Globblewonker");
	else if(sort==3) printf("S01E03 - Caçadores de cabeças");
	else if(sort==4) printf("S01E04 - A mão que balança a Mabel");
	else if(sort==5) printf("S01E05 - A Incoveniência");
	else if(sort==6) printf("S01E06 - Dipper versus Masculinidade");
	else if(sort==7) printf("S01E07 - Dipper em dobro");
	else if(sort==8) printf("S01E08 - Tesouro Irracional");
	else if(sort==9) printf("S01E09 - O Porco e o Viajante do Tempo");
	else if(sort==10) printf("S01E10 - Lutem, Lutadores");
	else if(sort==11) printf("S01E11 - Dipper Pequeno");
	else if(sort==12) printf("S01E12 - Summerween");
	else if(sort==13) printf("S01E13 - A Chefe Mabel");
	else if(sort==14) printf("S01E14 - O Poço sem fundo");
	else if(sort==15) printf("S01E15 - Ao Fundo da Piscina");
	else if(sort==16) printf("S01E16 - O Tapete Elétrico");
	else if(sort==17) printf("S01E17 - Meninos Loucos");
	else if(sort==18) printf("S01E18 - A Terra Diante dos Porcos");
	else if(sort==19) printf("S01E19 - Escapando dos Sonhos");
	else if(sort==20) printf("S01E20 - Gideão Assume");
	
	//
	else if(sort==21) printf("S02E01 - A Assustadora Volta dos Mortos");
	else if(sort==22) printf("S02E02 - O segredo do Diário");
	else if(sort==23) printf("S02E03 - A Guerra do Golf");
	else if(sort==24) printf("S02E04 - Ópera de meias");
	else if(sort==25) printf("S02E05 - Soos e o Verdadeiro Amor");
	else if(sort==26) printf("S02E06 - Pequena Lojinha de Presente de Horrores");
	else if(sort==27) printf("S02E07 - A Sociedade do Olho Cego");
	else if(sort==28) printf("S02E08 - O Jogo de Blendin");
	else if(sort==29) printf("S02E09 - O anjo do amor");
	else if(sort==30) printf("S02E10 - O Mistério do Solar Northwest");
	else if(sort==31) printf("S02E11 - Nem tudo é o que parece");
	else if(sort==32) printf("S02E12 - Um conto de Dois Stans \nEste episódio tem duração de 29:07min");
	else if(sort==33) printf("S02E13 - Masmorras, Masmorras e Mais Masmorras");
	else if(sort==34) printf("S02E14 - Stan para Prefeito");
	else if(sort==35) printf("S02E15 - Mabel e o Último Unicórnio");
	else if(sort==36) printf("S02E16 - Atrações de Estrada");
	else if(sort==37) printf("S02E17 - Dipper e Mabel VS. O Futuro");
	else if(sort==38) printf("S02E18 - Estranhagedon Parte 1");
	else if(sort==39) printf("S02E19 - Estranhagedon Parte 2");
	else if(sort==40) printf("S02E20 - Estranhagedon Parte 3 - Recuperando Gravity Falls \nEste episódio tem duração de 44:01min");
	
	printf("\n\n");
	system("pause");
	return 0;
}
