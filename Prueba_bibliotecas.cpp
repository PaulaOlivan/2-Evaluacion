#include<iostream>
#include<paula_func.h>

int main(){
    char salir;
    char palabra[15];
    std::cout<<"Cual es su palabra: ";
    std::cin>>(palabra);
   
    std::cout<<"Su palabra es";
    mayus_minus(palabra);
    std::cout<<palabra;
    std::cin>>salir;   
}
