#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<iostream>

int main(){
	int salir;
	//Definimos el vector de PUNTEROS
	int nletras;
	int cont;
	char *palabra[10];
	char *lista[1];//5 posiciones de memoria que apuntan a 5 palabras
	//Procedimiento
	for(cont=0;cont<1;cont++){
	//1. Leo una palabra
	     std:cout<<"Palabra: ";
	     std::cin>>Palabra;
	//2. Averiguo cuántas letras tiene
	nletras=strlen(palabra);
	//3. Reservo memoria para guardar la palabra.
	lista[0]=malloc(nletras*sizeof(char))
	//4. Escribo la palabra en la memoria resrvada
	//5. Volvemos al punto 1.
	strpcy(lista[cont],palabra);
	printf("\nToca cualquier tecla: ");
    scanf("%i",&salir);
}
