/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * 
 *
 * @file  Practica10
 * @author Daniel Rodríguez Duarte
 * @date Nov 16 2023
 *@brief Este programa incluye  función que reciba una cadena de caracteres en formato std::string y genere un std::vector de enteros, sabiendo que cada elemento del vector contiene la diferencia entre el carácter correspondiente de la cadena y el carácter anterior (asumiendo un carácter ficticio inicial 0):
*/
#include <iostream>
#include <vector>
#include <string>

void calcularDiferencias(const char cadena[], int diferencias[], size_t tam) {
    diferencias[0] = cadena[0] - '0';

    for (size_t i = 1; i < tam; ++i) {
        diferencias[i] = cadena[i] - cadena[i - 1];
    }
}

void imprimirArray(const int array[], size_t tam) {
    std::cout << "Array: [";
    for (size_t i = 0; i < tam; ++i) {
        std::cout << array[i];
        if (i < tam - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}


