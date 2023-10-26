#define PI 3.14159
#include <iostream>
double radio;


int main (){
    std::cout << "Dime el valor del radio";
    std::cin>>radio;

    std::cout<< "El area del circulo es: " << radio*radio*PI<<std::endl;
}


