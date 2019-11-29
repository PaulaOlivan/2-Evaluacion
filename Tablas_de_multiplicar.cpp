#include<iostream>
int main (){
    char salir;
    int ntabla;
    std::cout<<"Que tabla deseas que muestre: ";
    std::cin >> ntabla;
    std::cout<< "************************************\n";
    std::cout<< "*            TABLA DEL ";
    std::cout<< ntabla;
    std::cout<< "           *\n";
    std::cout<< "************************************\n";
    std::cin>> salir;
}
