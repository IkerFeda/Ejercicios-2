#include <iostream>
#include <string>

int main () {

    std::string nombre;
    int edad;

    std::cout << "Ingresa tu nombre: ";
    std::cin>> nombre;

    std::cout << "Ingresa tu edad ";
    std::cin >> edad;

    if (edad <= 18) {
        std::cout << "No puedes tomar alcohol.";
    }else {
        std::cout << "Ya puedes ir a la carcel!";
    }
    return 0;
}
