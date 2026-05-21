#ifndef PRODUCT_H
#define PRODUCT_H


class product{
private:
    char* nombre;
    double precio;
public:
    producto(const char * n , double e){
        nombre = new char [30];

        int i = 0;
        while(n[i]!= '\0'){
            nombre[i]= n[i];
            i++;
        }
        nombre[i]='\0';
        precio=e;
    }

    ~producto(){
        delete [] nombre;
    }

    void mostrar(){
     int i = 0;
        cout<<"nombre: "<<nombre<<endl;
        if (precio >0){
            cout<<"precio: "<<precio<<endl;
        }
        else {}

    }


};

#endif // PRODUCT_H
