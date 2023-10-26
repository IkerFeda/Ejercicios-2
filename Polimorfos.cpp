#include <iostream>

void muestra(int a){
    std::cout<< "Polimorfo entero"<<a<<std::endl;
    }

void muestra(double a){
    std::cout<< "Polimorfo double"<<a<<std::endl;
}

void muestra(std::string str){
    std::cout<< "Polimorfo string"<< str<<std::endl;
}

int main(){
    muestra(5);
    muestra(3.8);
    muestra("Viva los polimorfos");

    return 0;
}