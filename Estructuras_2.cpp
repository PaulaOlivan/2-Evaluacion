/*
Estructuras_2:
            struct amigo{ //guarda en una estructura DOS datos independientes ya que uno es un entero y otro un decimal. Los guarda juntos
                   int n_amigo; // Int y float ocupan bites distintos por eso se necesita clasificar
                   float dinero;       
            }; //ESE PUNTO Y COMA ES MUY IMPORTANTE          
*/


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fpaula.h>

using namespace std;

int main (){
    char respuesta[20];
    char salir;
    struct amigo{ // se define automaticamente
           int n_amigo;
           float dinero;
           };
           
    cout << "Cual es la moneda que se usa en tu pais? ";
    cin >> respuesta;
    
    amigo imaginario; //guardo memoria para un dato de tipo amigo
    cout << "Dime tu numero: ";
    cin >> imaginario.n_amigo; //guardar en el campo n_amigo el valor de su numero
    cout << "Dime cuanto dinero tienes: ";
    cin >> imaginario.dinero;
    
    //Recupero los datos de mi amigo imaginario
    cout << "\nMi amigo imaginario es mi amigo numero " << imaginario.n_amigo; //añadir variable que elija la moneda que quieras
    cout << "\nMi amigo imaginario tiene " << imaginario.dinero << " " << respuesta; 
    cin >> salir;
}
    
