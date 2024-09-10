#include <iostream> // Permite usar cout y cin
#include <string>   // Necesario para usar std::string
#include <cmath>    // Incluye funciones matemáticas como sqrt, pow, etc.

int main() { // int -> función entera con retorno entero
    // Imprimir el mensaje en la consola
    std::cout << "Calculadora de triángulos" << std::endl;

    std::string tipo_triangulo;
    float area;
    float perimetro;

    std::cout << "Ingrese el tipo de triángulo a calcular entre equilatero, isoceles, rectangulo y escaleno: "; 
    std::getline(std::cin, tipo_triangulo); // std::getline es mejor para leer nombres con espacios

    if (tipo_triangulo == "equilatero") {
        float a;
        std::cout << "Digite el lado del triángulo: "; 
        std::cin >> a;
        area = (sqrt(3)/4)*pow(a,2);
        std::cout << "Área del triángulo equilátero es =  " << area << std::endl;
    } 
    else if (tipo_triangulo == "isoceles") {
        float L;
        float b;
        std::cout << "Digite el lado del triángulo: "; 
        std::cin >> L;
        std::cout << "Digite la base del triángulo: "; 
        std::cin >> b;
        area = (b/2)*sqrt(pow(L,2)-pow((b/2),2));
        std::cout << "Área del triángulo isósceles es =  " << area << std::endl;
    } 
    else if (tipo_triangulo == "rectangulo") {
        float a;
        float b;
        std::cout << "Digite el cateto 1 del triángulo: "; 
        std::cin >> a;
        std::cout << "Digite el cateto 2 del triángulo: "; 
        std::cin >> b;
        area = (a*b)/2;
        std::cout << "Área del triángulo rectángulo es =  " << area << std::endl;
    } 
    else if (tipo_triangulo == "escaleno") {
        float a, b, c;
        std::cout << "Digite el lado 1 del triángulo: "; 
        std::cin >> a;
        std::cout << "Digite el lado 2 del triángulo: "; 
        std::cin >> b;
        std::cout << "Digite el lado 3 del triángulo: "; 
        std::cin >> c;

        // Calculamos el perímetro
        float p = (a + b + c) / 2;

        // Usamos la fórmula de Herón para el área
        area = sqrt(p * (p - a) * (p - b) * (p - c));

        // Calculamos los ángulos usando la ley de cosenos
        float angle_A = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)) * (180 / M_PI);
        float angle_B = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)) * (180 / M_PI);
        float angle_C = 180 - angle_A - angle_B; // La suma de los ángulos en un triángulo es 180 grados

        std::cout << "Área del triángulo escaleno es =  " << area << std::endl;
        std::cout << "Ángulo A = " << angle_A << " grados" << std::endl;
        std::cout << "Ángulo B = " << angle_B << " grados" << std::endl;
        std::cout << "Ángulo C = " << angle_C << " grados" << std::endl;
    } 
    else {
        std::cout << "Tipo de triángulo no reconocido." << std::endl;
    }

    // Retornar 0 para indicar que el programa terminó exitosamente
    return 0;
}
