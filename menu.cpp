#include "menu.h"
#include <iostream>


using namespace std;
menu::menu(product p_producto) : p1(p_producto)
{

}
menu::~menu()
{
    //dtor
}

void menu::mostrarOpcciones()
{
    p1.show_product();
}
