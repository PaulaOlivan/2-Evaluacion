//programa que ordena las palabras por numero de consonantes

#include<iostream>
#include<fpaula.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int diferencia_consonantes (char *palabra, char *palabra1){
    int cont;
    int resultado=0;
    resultado = contador_consonantes(palabra) - contador_consonantes(palabra1);
    return (resultado);
}


int main(){
    char *palabra[4];
    // Leo 4 palabras
    int cont;
    char salir;
    char aux[20];
    char *paux;
    int longitud;
    int veces;
    for (cont=0;cont<4;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
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
            for (cont=0;cont<3;cont++){
               if (diferencia_consonantes(palabra[cont], palabra[cont+1])<0){ //si la longitud es menos que 0 significa que las palabras estan al reves por numero de consonantes
                  paux=palabra[cont]; //Lucia le da el boli1 a Antonio
                  palabra[cont]=palabra[cont+1]; //Sergio le da el boli2 a Lucia
                  palabra[cont+1]=paux; //Sergio coge el boli1 de Antonio 
               }
            }
        }
        cout<<"\nLista de palabras ordenadas de mayor a menor\n";
        for(cont=0;cont<4;cont++){
          printf("%s\n",palabra[cont]);
        }
        for(veces=1;veces<4;veces++){
            for (cont=0;cont<3;cont++){
               if (diferencia_consonantes(palabra[cont], palabra[cont+1])>0){ //si la longitud es menos que 0 significa que las palabras estan al reves por numero de consonantes
                  paux=palabra[cont]; //Lucia le da el boli1 a Antonio
                  palabra[cont]=palabra[cont+1]; //Sergio le da el boli2 a Lucia
                  palabra[cont+1]=paux; //Sergio coge el boli1 de Antonio 
               }
            }
        }
        cout<<"\nLista de palabras ordenadas de menor a mayor\n";
        for(cont=0;cont<4;cont++){
          printf("%s\n",palabra[cont]);
        }
        
        
        
    cin >> salir;
}
