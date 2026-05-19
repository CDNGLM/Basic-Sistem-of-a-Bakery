#include <iostream>
#include "menu.h"

using namespace std;

int main()
{
    product cp(40,12);
    menu m1(cp);

    m1.mostrarOpcciones();
    return 0;
}
