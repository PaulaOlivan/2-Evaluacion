/*Vamos a hacer un programa que dibuje un cuadrado del tamaño que desee el usuario*/
#include<iostream>

int main(){
    //Definicion de variables
    char salir;
    int lado, col, fil;
    std::cout<< "Cual el lado del cuadrado? ";
    std::cin>>lado; //nested
    for(col=1;col<=lado;col++){
                               for(fil=1;fil<=lado;fil++){
                               std::cout<< '*';
                               }
                               
    std::cout<<"\n";
}
    std::cin>>salir;
    }

