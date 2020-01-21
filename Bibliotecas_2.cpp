#include<iostream>

//Delante del parentesis pongo lo que devuelve; lo que se convertira el la funcion
//Dentro del parentises pongo lo que recibo en el programa
int devuelve_longitud(char palabra[]){
    int longitud=0;//variable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;//sumamos una letra en la longitud
                               cont++;//pasamos a la siguiente letra de la palabra
                               }
    return (longitud); //coge el numero y lo devuelve
}
int contador_vocales(char palabra[]){
    char vocales[]={'a','e','i','o','u','A','E','I','O','U'};
    int nvocales=0;
    int cont1;
    int cont2;
    for(cont1=0;cont1<devuelve_longitud(palabra);cont1++){
          for(cont2=0;cont2<9;cont2++){
            if (palabra[cont1] == vocales[cont2]){
               nvocales++;
            }
          }
    }
    
    return(nvocales);
}

int contador_consonantes(char palabra[]){
    char vocales[]={'a','e','i','o','u','A','E','I','O','U'};
    int nconsonantes=0;
    int cont1;
    int cont2;
    int fallos_vocal=0;
    for(cont1=0;cont1<devuelve_longitud(palabra);cont1++){
       for(cont2=0;cont2<=9;cont2++){
         if (palabra[cont1] != vocales[cont2]){
           fallos_vocal++;
         }

       }
       if(fallos_vocal==10){
           nconsonantes++;
       }
       fallos_vocal=0;
    }
 
 return (nconsonantes);   
}

void mayus_minus(char palabra[]){ 
    int cont;
    for (cont=0;cont<devuelve_longitud(palabra);cont++){
        if (palabra[cont]<91 && palabra[cont]>64){
              palabra[cont] = palabra[cont]+32;               
        }
        else{
             if (palabra[cont]>96 && palabra[cont]<123){
              palabra[cont] = palabra[cont]-32;
              }
        }
        
    }
}
    
 int main(){
     char salir;
     char palabra[20];
     char vocales[]={'a','e','i','o','u'};
     char vocales1[]={'A','E','I','O','U'};
     int cont;
     int nvocales;
     int letras=0;
     /*int longitud;
     longitud=0;*/  //esta arriba ya
     
     std::cout<<"Introduzca aqui su palabra: ";
     std::cin>>palabra;
     //std::cin>>palabra1;
    
     std::cout<<"Su palabra tiene ";
     std::cout<<contador_vocales(palabra);
     std::cout<<" vocales";
     std::cout<<"\nSu palabra tiene ";
     std::cout<<contador_consonantes(palabra);
     std::cout<<" consonantes";
     for(cont=0;cont<devuelve_longitud(palabra);cont++){
                                                        letras++;
     }
     std::cout<<"\n";                                                  
     std::cout<<"Su palabra tiene ";
     std::cout<< letras;
     std::cout<<" letras";
     std::cout<<"\nSu palabra inversa es ";
     mayus_minus(palabra);
     std::cout<<palabra;
     mayus_minus(palabra);//Esto hace que la palabra vuelva a ser igual que la original
     for (cont=0;cont<devuelve_longitud(palabra);cont++){ //  \0--> donde se termina lo que hemos introducido en el teclado
        for(nvocales=0;nvocales<5;nvocales++){
                                           if (palabra[cont]== vocales[nvocales]){
                                              palabra[cont]='u';
                                           }
                                           if (palabra[cont]==vocales1[nvocales]){
                                              palabra[cont]='U';
                                           }
        } //si no tuviera contador_vocales definido arriba                            
         
     }
     std::cout<<"\n";      
     std::cout<<"Su nueva palabra es "<<palabra<<"\n";
    
  
     std::cin>>salir;
}
