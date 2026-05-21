#ifndef EMPRESA_H
#define EMPRESA_H

class empresa
{
    public:
        double * t_ventas;
        //cProducto *productos_disponible;
        //cProducto *productos_no_disponibles;
        
        empresa();
        virtual ~empresa();

        void aniadirProductoNoDisponible(); //cProducto producto_pedido
        void aniadirProductoDisponible(); //cProducto producto_horneado
        double corroborarPedido(char* tipo_producto);
        void finalizarVenta(char* nombre_producto, int cantidad_pedida, double dinero_depositado);
        void hornearProducto(int cantidad, char *tipo_producto); 


    protected:

    private:
};

#endif // EMPRESA_H