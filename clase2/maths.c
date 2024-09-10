//abs(x), pow(x,y) -> x^y, sqrt(x), sin, cos, tan log, log2

// Este es un comentario

#include <iostream> // Permite usar cout y cin
#include <string>   // Necesario para usar std::string
#include <cmath> 

int main() { // int -> función entera con retorno entero
    // Imprimir el mensaje en la consola
    std::cout << "Calculadora de hipotenusas" << std::endl;
   
    float c1;         // Se necesita especificar el tipo de dato float
    float c2; 
    float h; 
    
    std::cout << "Digite cateto 1: "; 
    std::cin >> c1;   
    std::cout << "Digite cateto 2: "; 
    std::cin >> c2;
    
    if(c1>0 && c2>0){
        h = sqrt(pow(c1,2)+pow(c2,2));
        std::cout << "hipotenusa =  " << h << std::endl;
    }
    else{
        std::cout << "ingrese de nuevo! los catetos deben ser positivos"<< std::endl;
    }

    
    // Retornar 0 para indicar que el programa terminó exitosamente
    return 0;
}

// Compilar en terminal
// g++ -o myexecutable programa.cpp
// ./myexecutable