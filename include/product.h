#ifndef PRODUCT_H
#define PRODUCT_H


class product
{
    public:
        double price;
        int quantity;
        product(double p_price, int quantity_p);
        virtual ~product();

        void show_product();

    protected:

    private:
};

#endif // PRODUCT_H
