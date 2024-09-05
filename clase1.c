// Este es un comentario

#include <iostream> // Permite usar cout y cin
#include <string>   // Necesario para usar std::string

int main() { // int -> función entera con retorno entero
    // Imprimir el mensaje en la consola
    std::cout << "Hola mundo" << std::endl;
   
    std::string nombre; // Se necesita especificar el tipo de dato std::string
    float edad;         // Se necesita especificar el tipo de dato float

    std::cout << "Digite el nombre: "; // Se usa << en lugar de >>
    std::getline(std::cin, nombre);    // std::getline es mejor para leer nombres con espacios

    std::cout << "Digite edad: "; // Se usa << en lugar de >>
    std::cin >> edad;

    std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    // Retornar 0 para indicar que el programa terminó exitosamente
    return 0;
}

// Compilar en terminal
// g++ -o myexecutable programa.cpp
// ./myexecutable
