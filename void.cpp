#include <iostream>

void perimetro(double lado){
    double perimetro= 4 * lado;
    std::cout << "El perimetro del cuadrado es "<< perimetro;

}
int main (){
    double lado= 5.0;
    perimetro(lado);

    return 0;
}
