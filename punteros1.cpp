#include<stdio.h>
#include<iostream>
int main(){
    int x;
    int y;
    char salir;
    x=3;
    y=5;
    printf("Direccion x=%X direccion y=%X",&x,&
    y);
    
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
    }
