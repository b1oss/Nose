#include <iostream>

using namespace std;

class Cola {
private:
    class Nodo {
        public:
            int info;
            Nodo *sig;
    };
    int longitud;
    Nodo *raiz;
    Nodo *fondo;
public:
    Cola();
    ~Cola();
    void insertar(int x);
    int extraer();
    void imprimir();
    void buscar(int y);
    bool empty();
};

Cola::Cola() {
    raiz = NULL;
    fondo = NULL;
}

Cola::~Cola() {}

void Cola::insertar(int x) {
    Nodo *nuevo_nodo;
    nuevo_nodo = new Nodo();
    nuevo_nodo->info = x;
    nuevo_nodo->sig = NULL;
    if (empty()) {
        raiz = nuevo_nodo;
        fondo = nuevo_nodo;
    } else {
        fondo->sig = nuevo_nodo;
        fondo = nuevo_nodo;
    }
}

int Cola::extraer() {
    if (!empty()) {
        int informacion = raiz->info;
        Nodo *bor = raiz;
        if (raiz == fondo) {
            raiz = NULL;
            fondo = NULL;
        } else {
            raiz = raiz->sig;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

void Cola::imprimir() {
    Nodo *reco = raiz;
    cout << "\n\tElementos de la cola.\n";
    while (reco != NULL) {
        cout <<  reco->info << " -> ";
        reco = reco->sig;
    }
    cout << endl;
}

void Cola::buscar(int y){
    int contador = 0, contAux = 0;
    Nodo* reco = raiz;
    cout << "Busqueda" << endl;
    while (reco != NULL) {
        if (y == reco->info) {
            cout << "El numero " << y << " se encuentra en : " << contador << endl;
            contAux++;
        }
        contador++;
        reco= reco->sig;     
    }
    if (contAux == 0) {
        cout << "No se encuentra el numero " << y << " en la lista." << endl;
    }
}

bool Cola::empty() {
    if (raiz == NULL) {
        return true;
    }
    else {
        return false;
    }
}


int main() {
    
    Cola *cola1 = new Cola();
    
    cola1->insertar(5);
    cola1->insertar(10);
    cola1->insertar(50);
    cola1->imprimir();
    cola1->buscar(4);
    cout << endl;
    cola1->buscar(10);
    cout << endl;
	cout << "Extraer elemento de cola: " << cola1->extraer() << endl;
	cola1->imprimir();
    delete cola1;

    return 0;
}
