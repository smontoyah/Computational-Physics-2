// Este es un comentario

#include <iostream> // Permite usar cout y cin
#include <string>   // Necesario para usar std::string

int main() { // int -> función entera con retorno entero
    // Imprimir el mensaje en la consola
    std::cout << "Calculadora en C" << std::endl;
   
    std::string nombre; // Se necesita especificar el tipo de dato std::string
    float a;         // Se necesita especificar el tipo de dato float
    float b; 
    float c; 

    std::cout << "Digite a: "; 
    std::cin >> a;   
    std::cout << "Digite b: "; 
    std::cin >> b;
    
    c = a+b;

    std::cout << "a: " << a << ", b: " << b << ", c: "<< c << std::endl;
    // Retornar 0 para indicar que el programa terminó exitosamente
    return 0;
}

// Compilar en terminal
// g++ -o myexecutable programa.cpp
// ./myexecutable