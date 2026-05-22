#ifndef ALMACEN_HPP
#define ALMACEN_HPP
#include "producto.hpp"

class cAlmacen
{
private:
    cProduct * total_de_productos;
    int tam_total;
public:
    cAlmacen(const cProduct * t_prod = nullptr , int tam = 0);
    ~cAlmacen();
    void buscar_disponibilidad(const char * nombre,  int cantidad);
};

#endif //ALMACEN_HPP