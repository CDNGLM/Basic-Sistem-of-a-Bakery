#include "product.h"
#include <iostream>
using namespace std;
product::product(double price_p = 0, int quantity_p = 0)
{
    //constructor
    price = price_p;
    quantity = quantity_p;
}

product::~product()
{
    //dtor
}

void product::show_product()
{
    cout<<"Price: "<<price<<endl<<"Quantity: "<<quantity<<endl;
}
