#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<conio.h>




using namespace std;

    void categorias();
	void ingresocategoria(int op);
	void empezarjuego(char palabras[][15], char nombres[]);

int main(){
	system("mode con cols=80 lines=25");
	categorias();
	system("pause");
		return 0;
}

void categorias(){
	int op;
	do{
		system("cls");
		printf("\n\t\t\t\tJuego del AHORCADO :\n\n");
		printf("CATEGORIAS\n\n");
		printf("1. animales");   
		printf("2. frutas");
		printf("ingresa una opcion");
		scanf("%i",&op);
	}while(op<1 || op>4);
	
	if(op==1) ingresocategoria(op);
	if(op==2) ingresocategoria(op);
	if(op==3) ingresocategoria(op);
	if(op==4) ingresocategoria(op);
	}
	
	char nombrecat[4][15]= {"frutas","animales"};
	char frutas[10][15]= {"BANANA","MANZANA","SANDIA","KIWI","POMELO","UVA"};
	char animales[10][15]= {"PERRO","GATO","OSO","TIBURON","JIRAFA","PEZ"};
	
	switch(op){
		,
		case 1:
			empezar juego(frutas,nombrecat[op-1]);
		    break;
		case 2:
			empezar juego(animales,nombrecat[op-1]);
			break;
		}
}
void empezarjuego (char palabras[][15], char nombre[]){
	int opcion,i,j,k,longitud,espacios,puntos=1200;
	char letra;
	int aciertos =0;
	int intentos =0;
	int ganar =0;
	srand(time(NULL));
	
     opcion= rand() % 10;
	 longitud= strlen(palabras[opcion]);
	char frase[longitud];
	
	for(i=0; i < longitud; i++){
		frase[i] = '_';
	
}	
	
	
	
	
	
	
	
	
	
	
}
