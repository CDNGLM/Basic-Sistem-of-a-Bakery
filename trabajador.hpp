#ifndef TRABAJADOR_HPP
#define TRABAJADOR_HPP
#include "persona.hpp"
#include "almacen.hpp"

class cTrabajador : public cPersona
{
public:
    cTrabajador (const char * nombre = nullptr);
    ~cTrabajador();
    void agregar_stock(cAlmacen &almacen);
};


#endif