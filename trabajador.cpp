#include <iostream>
#include "trabajador.hpp"
#include "almacen.hpp"
using namespace std;

cTrabajador::cTrabajador(const char * nombre)
{
    name = new char [30];
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

cTrabajador::~cTrabajador()
{
    delete[]name;
    name = nullptr;
}

void cTrabajador::agregar_stock(cAlmacen &almacen)
{
    cout<<"Cual Producto Deseas añadir más stock?"<<endl;
    int ind_producto = seleccionarProducto();
    int seleccionar_cantidad = seleccionarCantidad();
    almacen.aniadir_stock(ind_producto, seleccionar_cantidad);
    almacen.imprimir_catalogo();
}

