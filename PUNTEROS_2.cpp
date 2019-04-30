#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int salir;
    int nletras;
    int cont;
    char *palabra;
    char *lista[3];
    for(cont=0;cont<3;cont++){
    std::cout<<"Palabra: ";
    std::cin>>palabra;
    nletras=strlen(palabra);
    lista[0]=malloc(nletras*sizeof(char));
    strpcy(lista[cont],palabra);
    }
    printf("\nToca cualquier letra");
    scanf ("%i", &salir);
}
