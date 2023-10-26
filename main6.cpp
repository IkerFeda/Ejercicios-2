#include <iostream>
#include "Funciones.h"


int main() {
//6.1 Declarar punteros a variables

    int numero = 24;
    int *ptrnumero = &numero;

    std::cout << "Valor del número: " << *ptrnumero << std::endl;

    *ptrnumero = 64;

    std::cout << "Segundo valor del número: " << *ptrnumero << std::endl;

//6.2 Recorrer y modificar un array

    int numeros[]={1,2,3,4,5};
    int *ptrnumeros = numeros;

      std::cout << "Array original: ";
      for (int i = 0; i < 5; i++) {

      std::cout << *ptrnumeros << " ";
      ptrnumeros++;
      }

      std::cout << std::endl;

      ptrnumeros = numeros;

     for (int i = 0; i < 5; i++) {
         *ptrnumeros *= 2;
          ptrnumeros++;
     }


     std::cout << "Array modificado: ";
     for (int i = 0; i < 5; i++) {
     std::cout << *ptrnumeros << " ";
     ptrnumeros++;
     }
     std::cout << std::endl;

//6.3 New y delete
    {
        int cifra;

        std::cout << "Introduce una cifra: ";
        std::cin >> cifra;

        int* cambio = new int[cifra];

        for (int i = 0; i < cifra; i++){
            cambio[i] = i * 5;
        }

        std::cout << "Resultado cambio: ";
        for (int i = 0; i < cifra; i++) {
            std::cout << cambio[i] << " ";
        }
        delete[] cambio;
    }

//6.4 Aritmétrica de punteros
      int Numeros[] = {1, 2, 3, 4, 5};
    int *ptr = Numeros;

    std::cout << "Primer elemento: " << *ptr << std::endl;   //porqué sale junto con el resultado de arriba?

    ptr++;
    std::cout << "Segundo elemento: " << *ptr << std::endl;

    ptr += 2;
    std::cout << "Cuarto elemento: " << *ptr << std::endl;

    ptr--;
    std::cout << "Tercer elemento: " << *ptr << std::endl;
//basicamente es ir avanzando en los numeros usando +1 +2... de la posición 2 a la cuatro al sumarle 2

    int offset = 1;
    ptr = ptr - offset; // Retroceder el puntero en base al valor de 'offset'
    std::cout << "Segundo elemento: " << *ptr << std::endl;

//6.5 Puntero a puntero
                                                 //numero de el ejercicio 6.1
    int **ptrAPtrnumero = &ptrnumero;

    std::cout << "Valor del puntero: " << *ptrnumero << std::endl;

    **ptrAPtrnumero = 32;

    std::cout << "Cambio de puntero: " << **ptrAPtrnumero << std::endl;

//6.6 Punteros a funciones
    int (*funcion)(int, int);


    funcion = suma;

    int resultado = funcion(7, 2);
    std::cout << "Resultado de la suma: " << resultado << std::endl;

    funcion = resta;

    resultado = funcion(7, 2);
    std::cout << "Resultado de la resta: " << resultado << std::endl;

    funcion = multiplicacion;

    resultado = funcion(7, 2);
    std::cout << "Resultado de la multiplicacion: " << resultado << std::endl;


    return 0;
}

