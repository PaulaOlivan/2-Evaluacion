//Estructuras 5

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fpaula.h>

using namespace std;

int main (){
    int salir;
    
    typedef struct { //typedef: me invento un nuevo tipo de dato, una mezcla de dos datos, entero + float
            char nombre[15];
            int edad;
            char email[20];
    } datospersona;
    datospersona alumno[3]; //vector de alumnos
    int cont;
    for (cont=0;cont<3;cont++){
        cout << "Dime tu nombre: ";
        cin >> alumno[cont].nombre;
    }
    cout << "\nLista de la clase\n";
    for (cont=0;cont<3;cont++){
        cout << "Alumno " << cont+1 << " " << alumno[cont].nombre << "\n";
    }
    for (cont=0;cont<3;cont++){
        cout << "Dime tu edad: ";
        cin >> alumno[cont].edad;
    }
    cout << "\nLista de las edades\n";
    for (cont=0;cont<3;cont++){
        cout << "Alumno " << cont+1 << " " << alumno[cont].edad << " años\n";
    }
     
    
        
    
    
  /*  //reservamos memoria para los datos de una persona
    datospersona alumno1;// definimos la variable alumno1 (Importante definirla, es para poder guardar sitio en la memoria)
    datospersona *p_aux; // puntero que lleva a datos de persona //p_aux solo es el nombre de la variable //hexadecimal por el *
    // queremos que p_aux lleve a los datos almacenados en datospersona, para eso usamos el puntero (*)
    p_aux=&alumno1; //lleva y abre la primera direccion de memoria de alumno1 (el numero hexadecimal)
    
    cout << "Dime tu nombre: ";
    cin >> alumno1.nombre;
    cout << "\nTe llamas " << alumno1.nombre; */
    
    cin >> salir;
}
    
