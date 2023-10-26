#include <iostream>


void printInfo(std::string nombre, int edad = 30, std::string pais = "Unknown") {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Pais: " << pais << std::endl;
}

int main() {
    printInfo("John", 25, "USA");
    std::cout << "----------------------" << std::endl;
    printInfo("Alice");
    return 0;
}