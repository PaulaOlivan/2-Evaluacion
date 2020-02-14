#include <iostream>

#include <paula_func.h>

using namespace std;

int main(){
    char *palabra[5];
    int npalabra; 
    char *paux;
    int cont, longitud;
    char salir;
    char aux[20];
    for (cont=0;cont<5;cont++){
        cout << "Palabra "<<cont+1<<": ";
        cin >> aux;
        longitud = devuelve_longitud(aux);
        palabra[cont]= (char *) malloc((longitud+1)*sizeof(char));
        strcpy(palabra[cont], aux); 
        //Ejercicio a)
        cout<<"Tiene "<<longitud<<" letras\n";
        while (longitud>10){
              cout<<"Su palabra es incorrecta\n";
              cout<<"Introduzca una palabra de menos de 10 letras";
              cin>>aux;
        }
    }
    
    
    //Ejercicio b)
    int veces;
    for(veces=1;veces<4;veces++){
            for (cont=0;cont<3;cont++){ 
                if (contador_consonantes(palabra[cont])-contador_consonantes(palabra[cont+1])<0){
                    paux=palabra[cont];
                    palabra[cont]=palabra[cont+1];
                    palabra[cont+1]=paux;
    }
           }
                }
    
    cin>>salir;
}
