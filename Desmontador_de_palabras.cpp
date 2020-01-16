#include<iostream>
//Al programa le metes una palabra y el te devuelve la inicial
int main(){
    char salir;
    int cont;
    int longitud=0;
    char palabra[10]; //El nombre de la persona no podra tener mas de 10 caracteres pero si podra tener menos
    std::cout<<"Como te llamas? ";
    std::cin>> palabra;
    std::cout<<"\nQue nombre mas bonito, ";
    std::cout<<palabra;
    std::cout<<".";
    std::cout<<"\nComo soy un programa muy inteligente y mi programadora me hizo muy bien, te puedo deletrear tu nombre.";
    std::cout<<"\nLa primera letra de tu nombre es ";
    std::cout<<palabra[0];
    std::cout<< "\nPara demostrarte todo mi potencial como programa, a continuacion deletreare todo tu nombre.";
    std::cout<<"\nPara animar un poco esto,creare una animador virtual para alegrar este deletreo.";
    std::cout<<"\n    ****ANIMADORA****    \n";
    for(cont=0; palabra[cont]!='\0'; cont++){
        std::cout<<palabra[cont];
        std::cout<<"\n";
        }
    //Contamos las letras que tiene el nombre del usuario
    for(cont=0; palabra[cont]!='\0'; cont++){
                   longitud=longitud+1;       
    }
    std::cout<<"\n";
    std::cout<<"\nEl nombre de ";
    std::cout<< palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<" letras.";
    std::cout<<"\nYa te he mostrado toda mi inteligencia, asi que me despido. Adios, ";
     std::cout<< palabra;
    std::cin>>salir;   
}
    
