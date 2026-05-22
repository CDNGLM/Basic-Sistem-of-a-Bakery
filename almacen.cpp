#include <iostream>
#include "almacen.hpp"
#include "producto.hpp"
using namespace std;

cAlmacen::cAlmacen(const cProduct * t_prod, int tam)
{
    tam_total = tam;
    total_de_productos = new cProduct [tam_total];
    for (int i {0}; i<tam_total;i++)
    {
        total_de_productos[i] = t_prod[i];
    }
}
cAlmacen::~cAlmacen()
{
    delete[] total_de_productos;
    total_de_productos = nullptr;
}

void cAlmacen::buscar_disponibilidad(const char * nombre,  int cantidad)
{
    for (int i{0}; i<tam_total; i++)
    {
        int caracteres_iguales = 0;
        int j = 0;
        while (nombre[j] != '\0')
        {
            if (total_de_productos[i].nombre[j] == nombre[j])
            {
                caracteres_iguales++;
            }
            else
            {
                break;
            }
            j++;
        }

        if ((caracteres_iguales == total_de_productos[i].tamanio_n) && (total_de_productos[i].getStock() >= cantidad))
        {
            cout<<"Producto Disponible, Continue con la Compra."<<endl;
            return;
        }
        
    }
}