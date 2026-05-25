#include "persona.hpp"
#include <iostream>
#include "almacen.hpp"
#include "producto.hpp"

using namespace std;

cPersona::cPersona(const char* nombre)
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

cPersona::~cPersona()
{
    delete[] name;
    name = nullptr;
}


int cPersona::seleccionarProducto()
{
    int a;
    cout << "\nID del Producto seleccionado: ";
    cin >> a;
    return a;
}
int cPersona::seleccionarCantidad()
{
    int b;
    cout << "Cantidad: ";
    cin >> b;
    return b;
}
