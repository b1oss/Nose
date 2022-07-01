#include <iostream>

using namespace std;

struct propiedades{
    string nombreProducto;
    float precioProducto;
    int stockProducto, codigoProducto;
};

struct lista {
    lista **productos;
    int numeroDeProductos;
    propiedades productosLista;
};

void recibir(lista**,int,propiedades);
void darDeAlta(lista**,int,propiedades);
void darDeBaja(lista**,int,propiedades);
void buscar(lista**,int,propiedades);
void modificar(lista**,int,propiedades);
void mostrar(const lista**,const int,propiedades);

int main(int argc, char const *argv[])
{

    int opcion;

    cout << "INGRESE UNA OPCION: \n";
    cout << "1. Dar de alta a un producto\n";
    cout << "2. Dar de baja a un producto\n";
    cout << "3. Buscar producto\n";
    cout << "4. Modificar\n";
    cin >> opcion;

    lista **pro1;
    propiedades datos;

    recibir(pro1,10,datos);
    switch (opcion)
    {
    case 1:
        darDeAlta(pro1,10,datos);
        mostrar(pro1,10,datos);
        break;
    
    case 2:
        darDeBaja(pro1,10,datos);
        mostrar(pro1,10,datos);
        break;
    case 3:
        buscar(pro1,10,datos);
        break;

    case 4:
        modificar(pro1,10,datos);
        mostrar(pro1,10,datos);
        break;

    default:
        cout << "Opcion no disponible." << endl;
        break;
    }

    for (int i = 0; i < 4; i++)
    {
        delete pro1[i];
    }
    delete[] pro1;
    
    return 0;
}

void recibir(lista** prod1,int numeroDeProductos,propiedades datos) {
    *prod1 = new lista[10];
    for (int i = 0; i < 4; i++)
    {
        prod1[i] = new lista;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            
        }
        
    }
    
}

void mostrar(const lista **prod1,const int numeroDeProducto,propiedades datos) {

}

void darDeAlta(const lista **prod1,const int numeroDeProducto,propiedades datos) {

}

void darDeBaja(const lista **prod1,const int numeroDeProducto,propiedades datos) {

}

void buscar(const lista **prod1,const int numeroDeProducto,propiedades datos) {

}
void modificar(const lista **prod1,const int numeroDeProducto,propiedades datos) {
    int opcion;
    cout << "ELIGE UNA OPCION: \n";
    cout << "1. Editar nombre\n";
    cout << "2. Editar precio\n";
    cout << "3. Editar stock\n";
    cin >> opcion;



}