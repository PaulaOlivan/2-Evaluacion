#include<iostream>

int main(){
    //Definición de variables
    char salir;
    char respuesta;
    std:: cout <<"Hola mundo, es mi primer programa\n";
    std::cout <<"Eres guapo? (s/n)";
    std::cin >> respuesta; 
    if(respuesta== 's' || 'S'){
         std::cout <<"Hola guapon";
    }
    else{
         std::cout <<"Hola feo";
    }
    std::cin >>salir;
    
}
