
#include <iostream>
#include <string>

int main() {

    std::string nombre;
    int edad;


    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;


    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;


    std::cout << "Hola, " << nombre << "! Tu edad es: " << edad ;

    return 0;
}
