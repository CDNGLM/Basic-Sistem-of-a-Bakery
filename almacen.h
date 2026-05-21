#ifndef MENU_H
#define MENU_H
#include "product.h"

class almacen : public product{

private:

    producto* productos[5];
    int cantidad;

public:
    almacen(const char* n, float p) : product(n,p){

        cantidad = 0;

    }

    // Agregar productos
    void agregar(producto* p){

        if(cantidad < 5){

            productos[cantidad] = p;
            cantidad++;

            cout << "Producto agregado" << endl;
        }
        else{

            cout << "Almacen lleno" << endl;
        }
    }

    // Mostrar almacen y productos
    void mostrarAlmacen(){


        mostrar();
        cout<<"cantidad de producto: "<<cantidad<<endl;

        for(int i = 0; i < cantidad; i++){

            cout << "\nProducto " << i + 1 << endl;

            productos[i]->mostrar();
        }
    }
    ~almacen(){

        for(int i = 0; i < cantidad; i++){

            delete productos[i];
        }

    }
};
