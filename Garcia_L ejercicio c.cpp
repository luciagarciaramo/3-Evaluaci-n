#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int cambiar_vocales(char palabra[]){
      int n_vocales=0;
      int n_azar=0;
    int cont=0;
    while(palabra[cont]!='\0'){
          if(palabra[cont]=='a' || palabra[cont]=='e' || palabra[cont]=='i'|| palabra[cont]=='o'|| palabra[cont]=='u') {
             n_vocales++;
          }   
    if (palabra[n_vocales]!='\0'){
          if(palabra[n_vocales]=='k' || palabra[n_vocales]=='w' || palabra[n_vocales]=='x'|| palabra[n_vocales]=='q' {
             n_azar++;
             }         
          cont++;  
    }      
    
      return(n_vocales);           
}

