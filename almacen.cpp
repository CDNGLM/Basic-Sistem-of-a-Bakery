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

cProduct& cAlmacen::buscar_disponibilidad(int indice_prod,  int cantidad)
{
    for (int i{0}; i<tam_total; i++)
    {
        
        if ((indice_prod == total_de_productos[i].getIndice()) && (total_de_productos[i].getStock() >= cantidad))
        {
            cout<<"Producto Disponible, Continue con la Compra."<<endl;
            total_de_productos[i].reducirStock(cantidad);
            return total_de_productos[i];
        }
    }
    cout<<"Producto no disponible, por favor eliga otro"<<endl;
    static cProduct p_vacio;
    return p_vacio;
}

double cAlmacen::precio_total(int indice, int cantidad)
{
    cProduct& prod1 = buscar_disponibilidad(indice, cantidad);
    if (prod1.getIndice()!= 0)
    {
        return prod1.getPrice()*cantidad;
    }
    else return 0;
    
}

void cAlmacen::imprimir_catalogo()
{
    for (int i {0}; i<tam_total; i++)
    {
        cout<<i+1<<".- "<<endl;
        total_de_productos[i].mostrar_producto();
    }
}
