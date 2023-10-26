#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int numero = 5;
    std::cout << "Factorial de " << numero << " es: " << factorial(numero) << std::endl;
    return 0;
}