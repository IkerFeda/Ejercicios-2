#include <iostream>

int main() {
    int numeros[10];

    for (int i=0; i<10; i++) {
    numeros[i] = i + 1;
}

    std::cout << "10 números naturales:";
    for (int i=0; i<10; i++) {
        std::cout << numeros[i];
        if (i < 9){
            std::cout << ", ";
        }
    }

    return 0;
}
