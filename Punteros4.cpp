#include <iostream>
#include <stdio.h> // para los printf
#include <stdlib.h> // para los malloc
#include <string.h> // para strcpy
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
    char *paux;
    int veces;
    for (cont=0;cont<4;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
        longitud = devuelve_longitud(aux);
        cout<<"Tiene "<<longitud<<" letras\n";
        palabra[cont]= (char *) malloc((longitud+1)*sizeof(char)); // El +1 es para saber donde termina la palabra.
                         /* malloc: Reserva el espacio de "(longitud*sizeof(char))"
                         sizeof: calcula los bits se pone char porque tiene que calcular la longitud de una letra
                         char * es una conversion forzada. el dato de antes pasa a ser hexadecimal sin importar lo que era antes*/
        strcpy(palabra[cont], aux); // copia la cadena de caracteres, necesita la libreria string. (destino, origen); pasa del aux a una celda. 
                                    // Es el gorrilla que te dice la plaza libre
        }
        cout << "\nLista de palabras: \n";
        for (cont=0;cont<4;cont++){
            printf ("%s\n", palabra[cont]);
            }
        //ORDENAMOS POR EL METODO DE LA BURBUJA
        for(veces=1;veces<4;veces++){
            for (cont=0;cont<3;cont++){                        //si pones <0 ordena en  antialfabetico, si pones >0 ordena alfabeticamente
               if (strcmp(palabra[cont], palabra[cont+1])>0){ //strcmp sirve para comparar las letras de la palabra, sirve para ordenar alfabeticamente
                  paux=palabra[cont]; //Lucia le da el boli1 a Antonio
                  palabra[cont]=palabra[cont+1]; //Sergio le da el boli2 a Lucia
                  palabra[cont+1]=paux; //Sergio coge el boli1 de Antonio 
               }
            }
        }
        cout<<"\nLista de palabras ordenadas\n";
        for(cont=0;cont<4;cont++){
          printf("%s\n",palabra[cont]);
        }
        
        
    cin >> salir;
}
