#include <iostream>
#include "producto.hpp"
using namespace std;

cProduct::cProduct(const char * n , double e, int s, int ind)
{
    nombre = new char [30];

        int i = 0;
        precio = e;
        stock = s;
        indice = ind;
        if (n != nullptr) 
        {
            int i = 0;
            while(n[i] != '\0')
            {
                nombre[i] = n[i];
                i++;
            }
            nombre[i] = '\0';
            tamanio_n = i;
        } 
        else   
        {
            nombre[0] = '\0';
            tamanio_n = 0;
        }
}

cProduct::cProduct(const cProduct &otro)
{

    precio = otro.precio;
    stock = otro.stock;
    tamanio_n = otro.tamanio_n;

    nombre = new char[30];
    

    for (int i = 0; i <= tamanio_n; i++) {
        nombre[i] = otro.nombre[i];
        if (otro.nombre[i] == '\0')
        {
            break;
        }
    }
}

cProduct::~cProduct()
{
    delete [] nombre;
    nombre = nullptr;
}

cProduct& cProduct::operator=(const cProduct &otro)
{
    if (this != &otro)
    {
        delete [] nombre;

        precio = otro.precio;
        stock = otro.stock;
        tamanio_n = otro.tamanio_n;

        nombre = new char[otro.tamanio_n];
        for (int i = 0; i <= tamanio_n; i++) {
            nombre[i] = otro.nombre[i];
        }
    }
    return *this;
}

void cProduct::mostrar_producto()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<"Cantidad Disponible: "<<stock<<endl;
}

void cProduct::reducirStock(int cantidad)
{
   stock -= cantidad;
}

void cProduct::setStock(int s)
{
    stock = s;
}

void cProduct::setPrice(double e)
{
    precio = e;
}

int cProduct::getStock()
{
    return stock;
}

double cProduct::getPrice()
{
    return precio;
}

int cProduct::getIndice()
{
    return indice;
}
