#include<iostream>
int main (){
    //Definicion de variables
    char salir;
    char respuesta;
    std::cout <<"Hola mundo, mi primer programa\n";
    do{
      std::cout <<"Eres guapo? (s/n): ";
      std::cin >> respuesta;
    }while(respuesta != 'S'&& respuesta!='s' && respuesta!='N' && respuesta!='n' );
    if(respuesta=='S' || respuesta=='s')
      std::cout <<"Hola guapo";
    else
      std::cout <<"Hola feo";
    std::cin >> salir;
}
