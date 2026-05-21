#ifndef MENU_H
#define MENU_H
#include "product.h"

class menu
{
    public:
        product p1;
        menu(product p_producto);
        virtual ~menu();

    void mostrarOpcciones();

    protected:

    private:
};

#endif // MENU_H
