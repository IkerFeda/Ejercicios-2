#include <iostream>
using namespace std;
string MesActual;
enum Meses {Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiempbre, Octubre, Noviembre, Diciembre};

int main (){
    const int numeroMeses = 12;
    std::cout<< "Elige un mes" ;
    std::cin >> MesActual;
    for (int i = Enero; i <= Diciembre; i++) {
        if (MesActual == "Enero" && i == Enero) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Febrero" && i == Febrero) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Marzo" && i == Marzo) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Abril" && i == Abril) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Mayo" && i == Mayo) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Junio" && i == Junio) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Julio" && i == Julio) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Agosto" && i == Agosto) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Septiembre" && i == Septiempbre) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Octubre" && i == Octubre) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Noviembre" && i == Noviembre) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        } else if (MesActual == "Diciembre" && i == Diciembre) {
            std::cout << "El mes elegido es: " << MesActual << std::endl;
            break;
        }
    }
    return 0;
}


