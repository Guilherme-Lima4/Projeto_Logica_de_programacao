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
	printf ("\n Digite [1] Para sim e [2] para n�o. \n");
	printf ("\n O animal � mam�fero? \n ");
	scanf ("%d", &esc1);
	printf ("\nO animal � Quadr�pede? \n ");						 
	scanf ("%d", &esc2);										 
	printf ("\nO animal � Carn�voro? \n ");						 
	scanf ("%d", &esc3);										 
	printf ("\nO animal � Herb�voro? \n ");                       
	scanf("%d", &esc4);                                          
	printf ("\nO animal Voa? \n ");                         		  
	scanf ("%d", &esc5);                                         
	printf ("\nO animal � um R�ptil? \n ");						 	
	scanf ("%d", &esc6);										 
	
	if(esc1 == 1 && esc2 == 2 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal � uma Baleia!");
}
	else if(esc1 == 2 && esc2 == 2 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal � um Pinguim!");
	}	
	else if(esc1 == 1 && esc2 == 1 && esc3 == 2 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal � um Macaco!");
	}	
	else if(esc1 == 1 && esc2 == 2 && esc3 == 2 && esc4 == 2 && esc5 == 1 && esc6 == 2){
		system("CLS");
		printf ("O animal � um Morcego!");
	}	
	else if(esc1 == 2 && esc2 == 2 && esc3 == 2 && esc4 == 1 && esc5 == 1 && esc6 == 2){
		system("CLS");
		printf ("O animal � um Pato!");
	}	
	else if(esc1 == 2 && esc2 == 2 && esc3 == 2 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal � uma Avestruz!");
	}	
	else if(esc1 == 1 && esc2 == 2 && esc3 == 2 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal � um Homem!");
	}	
	else if(esc1 == 1 && esc2 == 1 && esc3 == 2 && esc4 == 1 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal � um Cavalo!");
	}	
	else if(esc1 == 1 && esc2 == 1 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 2){
		system("CLS");
		printf ("O animal � um Le�o!");
	}	
	else if(esc1 == 2 && esc2 == 2 && esc3 == 1 && esc4 == 2 && esc5 == 1 && esc6 == 2){
		system("CLS");
		printf ("O animal � uma �guia!");
	}	
	else if(esc1 == 2 && esc2 == 1 && esc3 == 2 && esc4 == 2 && esc5 == 2 && esc6 == 1){
		system("CLS");
		printf ("O animal � uma Tartaruga!");
	}	
	else if(esc1 == 2 && esc2 == 1 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 1){
		system("CLS");
		printf ("O animal � um Crocodilo!");
	}	
	else if(esc1 == 2 && esc2 == 2 && esc3 == 1 && esc4 == 2 && esc5 == 2 && esc6 == 1){
		system("CLS");
		printf ("O animal � uma Cobra!");
	}	
	
	else{
		system("CLS");
		printf("\n Animal n�o identificado!");
	}
	printf ("\n Deseja encontrar um animal novamente?\n 1 Para sim e 2 para n�o\n");
	scanf("%d", &Desejo);
}while(Desejo==1);


	system("PAUSE");	
	return 0;
}

