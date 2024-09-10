//abs(x), pow(x,y) -> x^y, sqrt(x), sin, cos, tan log, log2

// Este es un comentario

#include <iostream> // Permite usar cout y cin
#include <string>   // Necesario para usar std::string
#include <cmath> 

int main() { // int -> función entera con retorno entero
    // Imprimir el mensaje en la consola
    std::cout << "Calculadora de triangulos" << std::endl;

    std::string tipo_triangulo; 
    float area;
    float perimetro;
    
    std::cout << "Ingrese el tipo de triangulo a calcular entre equilatero, isoceles y rectangulo: "; 
    std::getline(std::cin, tipo_triangulo);    // std::getline es mejor para leer nombres con espacios
   
    
    if(tipo_triangulo == "equilatero"){
        float a;
        std::cout << "Digite el lado del triangulo: "; 
        std::cin >> a;
        area = (sqrt(3)/4)*pow(a,2);
        std::cout << "area del triangulo equilatero es =  " << area << std::endl;
    }
    
    if(tipo_triangulo == "isoceles"){
        float L;
        float b;
        std::cout << "Digite el lado del triangulo: "; 
        std::cin >> L;
        std::cout << "Digite la base del triangulo: "; 
        std::cin >> b;
        area = (b/2)*sqrt(pow(L,2)-pow((b/2),2));
        std::cout << "area del triangulo isoceles es =  " << area << std::endl;
    }

    if(tipo_triangulo == "rectangulo"){
        float a;
        float b;
        std::cout << "Digite el cateto 1 del triangulo: "; 
        std::cin >> a;
        std::cout << "Digite el cateto 2 del triangulo: "; 
        std::cin >> b;
        area = (a*b)/2;
        std::cout << "area del triangulo rectangulo es =  " << area << std::endl;
    }

    
    // Retornar 0 para indicar que el programa terminó exitosamente
    return 0;
}

// Compilar en terminal
// g++ -o myexecutable programa.cpp
// ./myexecutable