#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "almacen.hpp"
#include "persona.hpp"


class cCliente : public cPersona
{
public:
    cCliente (const char * nombre = nullptr);
    ~cCliente ();
    void realizarPedidos(cAlmacen &l1);
};
#endif  
