#include <iostream>
#include "almacen.hpp"
#include "producto.hpp"
#include "cliente.hpp"

using namespace std;

int main()
{
    cProduct p1("Cacho", 2.5, 50,1), p2("Alfajor", 3.0, 30,2), p3("Trujillano", 1.5, 30,3);
    cProduct l1 [3] ={p1, p2, p3};
    cAlmacen alma(l1, 3);
    cCliente usuarioNuevo("Jose");
    usuarioNuevo.realizarPedidos(alma);

    return 0;
}
