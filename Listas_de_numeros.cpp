//programa que lee una lista de caracteres (palabra) o numeros (numero de mas de una cifra)
#include<iostream>
/*Este programa pedira un numero de numeros que guardara y nos dara la media aritmetica del conjunto de numeros*/
int main(){
    char salir;
    int num[4];
    int cont;
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
          std::cout<<"Introduce el numero", cont, ": ";
          std::cin>> num[cont];
    }
    //Sacamos los numeros introducidos en el vector
    std::cout<<"Has introducido los siguientes numeros: ";
    for(cont=0;cont<=3;cont++){
    std::cout<<num[cont];
    std::cout<<", ";                         
    }
    std::cin>>salir;
}
