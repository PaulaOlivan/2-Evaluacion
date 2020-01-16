#include<iostream>

int main(){
    char salir;
    char palabra[10];
    int cont;
    int longitud;
    longitud=0; //Inicio una variable acumulativa
    std::cout<<"Introduzca su plabara: ";
    std::cin>>palabra;
    
    //Truquillo
    for (cont=0; palabra[cont]!='\0'; cont++){
        longitud++;
        }
     /* a bajo nivel, un while y un for son equivalentes. Asi es un while equivalente al for anterior.
     while (palabra[cont]!='\0'){
              longitud++;
              cont++;
              }*/
              
    std::cout<<"Su palabra, ";
    std::cout<< palabra;
    std::cout<<", tiene ";
    std::cout<< longitud;
    std::cout<<" letras.";
    std::cin>>salir;
}
