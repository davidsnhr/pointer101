#include <iostream>
using namespace  std;

void increasePrice(double* price) {
    *price *= 1.2;
}
int main()
{
    double price  = 100;
    increasePrice(&price);
    cout << "price: " << price << endl;

    // pointer
    // un puntero es una variable que almacena la direccion de memoria de otra variable
    int number = 10;
    // * indica que la variable pointer almacenara una direccion de memoria
    int* pointer = &number;
    cout << "direccion de memoria puntero: " << pointer << endl;
    // el operador & de referencia, nos permigte obtener la direccion de memoria
    cout << "direccion variable: " << &number << endl;

    cout << "Este es el valor del puntero: " << *pointer << endl;
    // se permite realizar nuevas asignaciones una vez dereferenciado el puntero
    *pointer  = 20;
    cout << "Este es el nuvo valor del number: " << number << endl;

    // ejercicio
    int x = 10;
    int y = 20;
    int* ptr = &x;
    cout << "direccion de memroia: "<< ptr << endl;
    cout << "valor de la direccion de memoria: " << *ptr << endl;
    *ptr *= 2;
    ptr = &y;
    *ptr *= 3;



    // punteros constantes y constantes

    // 1.- los datos son constantes pero el puntero puede ser modificado

    const int  x2 = 10;
    const int* ptr2 = &x2;
    cout << "memory addres constante" << ptr2  << endl;

    int y2 = 100;
    ptr = &y2;
    cout << "nuevo memory address de ptr: "  << ptr << endl;


    struct Point {
        int x;
        int y;
    };

    Point p = {10,20};

    Point* puntero = &p;

    cout << "memory address de punterto: " << puntero << endl;
    cout << "valor de x desde el puntero: " << puntero->x << endl;
    cout << "valor de x: "<< p.x << endl;


struct Pointer {
    int a;
    int b;
};

    Pointer p1 = {30, 50};

    Pointer* pValue= &p1;

    cout << "valor de pValue: " << (*pValue).a << endl;
    cout << "valor de pValue:" << pValue->b << endl;















    return 0;
}
