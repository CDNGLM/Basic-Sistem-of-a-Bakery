#ifndef PRODUCT_H
#define PRODUCT_H

class producto{

private:

    float precio;
    int stock;

public:
    char nombre

    producto(const char* n = "", float p = 0, int s = 0){

        int i = 0;

        while(n[i] != '\0'){

            nombre[i] = n[i];
            i++;
        }

        nombre[i] = '\0';

        precio = p;
        stock = s;
    }


    void setPrecio(float p){

        precio = p;
    }

    float getPrecio(){

        return precio;
    }




    void setStock(int s){

        stock = s;
    }

    int getStock(){

        return stock;
    }

    // Reducir stock
    void reducirStock(int cantidad){

        stock -= cantidad;
    }


    void mostrarInfo(){

        cout << "Nombre : " << nombre << endl;
        cout << "Precio : " << precio << endl;
        cout << "Stock  : " << stock << endl;
    }
};

#endif // PRODUCT_H
