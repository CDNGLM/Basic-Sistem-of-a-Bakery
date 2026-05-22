#ifndef PRODUCT_HPP
#define PRODUCT_HPP


class cProduct{
private:
    
    double precio;
    int stock;

public:
    char* nombre;
    int tamanio_n;
    
    cProduct(const char * n = nullptr , double e = 0, int s = 0);
    cProduct(const cProduct &otro);
    //cProduct();
    ~cProduct();
    cProduct& operator =(const cProduct &otro);

    void mostrar_producto();
    void reducirStock(int cantidad);
    void setStock(int cantidad);
    void setPrice(double precio);
    int getStock();
    double getPrice();
};

#endif // PRODUCT_HPP