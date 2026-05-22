#include <iostream>
#include "almacen.hpp"
#include "producto.hpp"

using namespace std;

int main()
{
    cProduct p1("Cacho", 2.5, 50), p2("Alfajor", 3.0, 30), p3("Trujillano", 1.5, 30);
    cProduct l1 [3] ={p1, p2, p3};
    cAlmacen alma(l1, 3);

    alma.buscar_disponibilidad("Cacho", 15);
    return 0;
}
