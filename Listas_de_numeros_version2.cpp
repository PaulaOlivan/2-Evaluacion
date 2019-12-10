//programa que lee una lista de caracteres (palabra) o numeros (numero de mas de una cifra)
#include<iostream>
/*Este programa pedira un numero de numeros que guardara y nos dara la media aritmetica del conjunto de numeros*/
int main(){
    char salir;
    int num[4];
    int cont;
    float suma_num; //Si luego se dividen dos numeros enteros nunca dara numero decimal, por lo que hay que hacer que uno sea decimal, aunque metamos numero entero
    float media;   //A esto se le llama conversion forzada
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
          std::cout<<"Introduce el numero: ", cont;
          std::cin>> num[cont];
    }
    //Sacamos los numeros introducidos en el vector
    std::cout<<"Has introducido los siguientes numeros: ";
    for(cont=0;cont<=3;cont++){ //Como el num[1] es igual a cero, solo se llega hasta num[3] no al cuatro, ya que seria 5 numeros en ese caso
    std::cout<<num[cont];
    std::cout<<", ";                         
    }
    std::cout<<"\n";
    
    std::cin>>salir;
}
