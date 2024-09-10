// Este es un comentario

#include <iostream> // Permite usar cout y cin
#include <string>   // Necesario para usar std::string

int main() { // int -> función entera con retorno entero
    // Imprimir el mensaje en la consola
    std::cout << "Comparador de numeros" << std::endl;
   
    float a;         // Se necesita especificar el tipo de dato float 

    std::cout << "Digite un numero entero: "; 
    std::cin >> a;   

    if (a<0){
        std::cout<<"EL numero es negativo"<< std::endl;
    }
    else{
        std::cout<<"El numero es postivo"<< std::endl;
    }

    if(a==0){
        std::cout<<"EL numero es cero"<< std::endl;
    }
    // Retornar 0 para indicar que el programa terminó exitosamente
    return 0;
}

// Compilar en terminal
// g++ -o myexecutable programa.cpp
// ./myexecutable