#include <iostream>
#include "empresa.hpp"

using namespace std;



empresa::empresa()
{
    //ctor
}
empresa::~empresa()
{
    //dtor
}

double empresa::corroborarPedido(char* tipo_producto)
{
    /*
    for (int i {0}; i<cantidad_p_disponibles; i++)
    {
        if (tipo_producto == producto_disponible[i].nombre)
        {
            cout<<"Producto Disponible, proceda con su compra"<<endl;
            return producto_disponilbe[i].precio;
        }
        else
        {
            cout<<"Producto no Disponible"<<endl;
            return 0;
        }
    }
    */
    //realizar venta
}

void empresa::finalizarVenta(char * nombre_producto,int cantidad_pedida, double dinero_depositado)
{
    /*
        double precio_prod = corroborarPedido(nombre_producto); 
        if (precio_prod == 0);
        else
        {
            cout<<"Total a pagar: "<< precio_prod * cantidad_pedida<<endl<<"Dinero depositado: "<<dinero_depositado<<endl<<"Vuelto: "<<dinero_depositado - ( precio_prod * cantidad_pedida)<<endl;
        }
    */

}

void empresa::hornearProducto(int cantidad, char*tipo_de_producto)
{
    /*
    
    */

}