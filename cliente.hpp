#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "almacen.hpp"


class cCliente
{
protected:
    char * name;
public:
    cCliente (const char * nombre = nullptr);
    ~cCliente ();

    int seleccionarProducto();
    int seleccionarCantidad();
    void realizarPedidos(cAlmacen l1);

};
#endif
