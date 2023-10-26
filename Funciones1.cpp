#include <iostream>
#include "suma.h"


void saludo() {
    std::cout << "Hola!" << std::endl;

}

int main (){
    int numero1;
    int numero2;
    saludo();

    std::cout<< "Dime tu primer numero ";
    std::cin>> numero1;
    std::cout<< "Dime tu segundo numero ";
    std::cin>> numero2;
    std::cout<< "La suma de "<< (numero1, numero2) << "es "<< suma (numero1, numero2)<<std::endl;

    return 0;


}