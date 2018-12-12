#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){

	setlocale(LC_ALL,"Portuguese");
	
	system("color 3F");
	int esc1,esc2,esc3,esc4,esc5,esc6,Desejo;
	
	do{
	system("CLS");
	printf ("\n----Identifique o Animal!----");
	printf ("\n Digite [1] Para sim e [2] para não. \n");
	printf ("\n O animal é mamífero? \n ");
	scanf ("%d", &esc1);
	printf ("\nO animal é Quadrúpede? \n ");						 
	scanf ("%d", &esc2);										 
	printf ("\nO animal é Carnívoro? \n ");						 
	scanf ("%d", &esc3);										 
	printf ("\nO animal é Herbívoro? \n ");                       
	scanf("%d", &esc4);                                          
	printf ("\nO animal Voa? \n ");                         		  
	scanf ("%d", &esc5);                                         
	printf ("\nO animal é um Réptil? \n ");						 	
	scanf ("%d", &esc6);										 
	
	if(esc1 == 1 && esc2 == 2 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal é uma Baleia!");
}
	else if(esc1 == 2 && esc2 == 2 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal é um Pinguim!");
	}	
	else if(esc1 == 1 && esc2 == 1 && esc3 == 2 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal é um Macaco!");
	}	
	else if(esc1 == 1 && esc2 == 2 && esc3 == 2 && esc4 == 2 && esc5 == 1 && esc6 == 2){
		system("CLS");
		printf ("O animal é um Morcego!");
	}	
	else if(esc1 == 2 && esc2 == 2 && esc3 == 2 && esc4 == 1 && esc5 == 1 && esc6 == 2){
		system("CLS");
		printf ("O animal é um Pato!");
	}	
	else if(esc1 == 2 && esc2 == 2 && esc3 == 2 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal é uma Avestruz!");
	}	
	else if(esc1 == 1 && esc2 == 2 && esc3 == 2 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal é um Homem!");
	}	
	else if(esc1 == 1 && esc2 == 1 && esc3 == 2 && esc4 == 1 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal é um Cavalo!");
	}	
	else if(esc1 == 1 && esc2 == 1 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal é um Leão!");
	}	
	else if(esc1 == 2 && esc2 == 2 && esc3 == 1 && esc4 == 2 && esc5 == 1 && esc6 == 2){
		system("CLS");
		printf ("O animal é uma Águia!");
	}	
	else if(esc1 == 2 && esc2 == 1 && esc3 == 2 && esc4 == 2 && esc5 == 2 && esc6 == 1){
		system("CLS");
		printf ("O animal é uma Tartaruga!");
	}	
	else if(esc1 == 2 && esc2 == 1 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 1){
		system("CLS");
		printf ("O animal é um Crocodilo!");
	}	
	else if(esc1 == 2 && esc2 == 2 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 1){
		system("CLS");
		printf ("O animal é uma Cobra!");
	}	
	
	else{
		system("CLS");
		printf("\n Animal não identificado!");
	}
	printf ("\n Deseja encontrar um animal novamente?\n 1 Para sim e 2 para não\n");
	scanf("%d", &Desejo);
}while(Desejo==1);


	system("PAUSE");	
	return 0;
}

