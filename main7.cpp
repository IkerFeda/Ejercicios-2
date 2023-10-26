#include <iostream>

int main() {

    int numero = 24;

    int &refNumero = numero;

    std::cout << "Valor de numero: " << numero << std::endl;
    std::cout << "Valor de refNumero: " << refNumero << std::endl;

    refNumero = 32;

    std::cout << "Nuevo valor de numero: " << numero << std::endl;
    std::cout << "Nuevo valor de refNumero: " << refNumero << std::endl;


    return 0;
}

