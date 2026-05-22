#include "cliente.hpp"
#include <iostream>
#include "almacen.hpp"
#include "producto.hpp"


using namespace std;

cCliente::cCliente(const char* nombre)
{
    if (nombre != nullptr) 
        {
            int i = 0;
            while(nombre[i] != '\0')
            {
                name[i] = nombre[i];
                i++;
            }
            name[i] = '\0';
        } 
    else   
    {
       name[0] = '\0';
    }
}

cCliente::~cCliente()
{
    delete[] name;
    name = nullptr;
}

int cCliente::seleccionarProducto()
{
    int a;
    cout << "\nID del Producto seleccionado: ";
    cin >> a;
    return a;
}
int cCliente::seleccionarCantidad()
{
    int b;
    cout << "Cantidad que desea llevar: ";
    cin >> b;
    return b;
}

void cCliente::realizarPedidos(cAlmacen almacen)
{
    almacen.imprimir_catalogo();
    int p_pedido = seleccionarProducto();
    int c_pedido = seleccionarCantidad();
    almacen.precio_total(p_pedido, c_pedido);
    
}
