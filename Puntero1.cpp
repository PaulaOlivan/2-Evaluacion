#include<iostream>
#include<stdio.h> //contiene printf
#include<stdlib.h> //contiene 

int main(){
    int x;
    int salir;
    x=2;
    printf("El numero x es %d",x);//sacar algo por pantalla, como std::cout pero antiguo   
                           // %d es el descriptor, indica el tipo de dato que vamos a sacar
                           //%c para letra
                           //%f para float (numero decimal)
    int a;
    a=2;
    printf("\nEl numero a=%d y esta almacenado en %X",a,&a); //%X sirve para darte la direccion en la que a esta archivado
                                                             //&a sirgnifica posicion de memoria donde se almacena la variable, es un numero hexadecimal
                                                             //%X sirve para sacar una variable hexadecimal, por eso hay que colocarlo con la &a
    int *pa; //pa va a guerdar un numero hexadecil que es donde esta alojada otra variable
    pa=&a;  //se pude poner doble barra delante y entonces veremos que cambia la direccion que tiene asignada
           //estamos almacenando la direccion de a en pa
          //pa es un puntero--> un puntero es una variable que guarda la direccion donde se encuentra otra
    printf("\nLa variable pa es un puntero que contiene %X",pa); 
  
    int numero[5];
    numero[0]=9;
    numero[1]=8;
    numero[2]=7;
    printf("\nNumero[0] es igual a %d",numero[0]); //el vector de numero tiene varios pero le pides que saque solo el 0
    printf("\nNumero[1] es igual a %d",numero[1]);
    printf("\nNumero[2] es igual a %d",numero[2]);
    printf("\nNumero[3] es igual a %d",numero[3]);
    printf("\nNumero[4] es igual a %d",numero[4]);
    printf("\nNumero es igual a %X",numero+1);
    printf("\nNumero es igual a %d",*(numero+1));
    
    std::cin>>salir;   
}
