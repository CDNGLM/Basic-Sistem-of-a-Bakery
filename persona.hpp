#ifndef PERSONA_HPP
#define PERSONA_HPP

class cPersona
{
    protected:
    char * name;
public:
    cPersona (const char * nombre = nullptr);
    virtual ~cPersona ();

    int seleccionarProducto();
    int seleccionarCantidad();
};

#endif