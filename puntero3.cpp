#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fpaula.h>

//Este programa lee 4 palabras y las guarda
using namespace std;
/*
int devuelve_longitud (char aux[])
    int cont=0;
    int longitud=0;
    while (aux[cont]!='\0'){
          longitud++;
          cont++;}
    return(longitud);}      
    
    */

int main(){
    char *palabra[4];
    // Leo 4 palabras
    int cont, longitud;
    char salir;
    char aux[20];
    for (cont=0;cont<4;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
        longitud = devuelve_longitud(aux);
        cout<<longitud;
        //palabra[cont]= (char *) malloc(longitud*sizeof(char));
                         /*malloc: Reserva el espacio de "(longitud*sizeof(char))"
                         sizeof: calcula los bits se pone char porque tiene que calcular la longitud de una letra
                         char * es una conversion forzada. el dato de antes pasa a ser hexadecimal sin importar lo que era antes*/
        
    }
        
    cin >> salir;
}
