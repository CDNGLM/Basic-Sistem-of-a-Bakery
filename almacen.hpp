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
    cProduct& buscar_disponibilidad(int indi,  int cantidad);
    double precio_total(int indice, int cantidad);
    void aniadir_stock(int indice, int cantidad);
    void imprimir_catalogo();
};

#endif //ALMACEN_HPP
