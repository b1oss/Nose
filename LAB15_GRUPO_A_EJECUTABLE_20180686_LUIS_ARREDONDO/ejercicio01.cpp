#include <iostream>
#include <vector>

class Vehiculo
{
public:
    std::vector<std::string> componentes;
    std::vector<std::string> pintura;
    void ListaComponentes() const {
        std::cout << "\tCOMPONENTES\n";
        for (size_t i = 0; i < componentes.size(); i++)
        {
            std::cout << i + 1 << ". " << componentes[i] << std::endl;
        }
        std::cout << "\n";
    }
    void ListaPintura() const {
        std::cout << "\tCOLORES DISPONIBLES\n";
        for (size_t i = 0; i < pintura.size(); i++)
        {
            std::cout << i + 1 << ". " <<  pintura[i] << std::endl;        
        }
        std::cout << "\n\n";
    }
};

class Color
{
public:
    virtual ~Color() {}
    virtual void ColorRojo() const = 0;
    virtual void ColorGris() const = 0;
    virtual void ColorNegro() const = 0;
    virtual void ColorBlanco() const = 0;
    virtual void ColorAzul() const = 0;
};

class ColorEspecifico : public Color {
private:
    Vehiculo* vehiculoColor;
public:
    ColorEspecifico() {
        this->Reset();
    }
    ~ColorEspecifico() {
        delete vehiculoColor;
    }
    void Reset() {
        this->vehiculoColor = new Vehiculo();
    }
    void ColorRojo() const override {
        this->vehiculoColor->pintura.push_back("Rojo");
    }
    void ColorGris() const override {
        this->vehiculoColor->pintura.push_back("Gris");
    }
    void ColorNegro() const override {
        this->vehiculoColor->pintura.push_back("Negro");
    }
    void ColorBlanco() const override {
        this->vehiculoColor->pintura.push_back("Blanco");
    }
    void ColorAzul() const override {
        this->vehiculoColor->pintura.push_back("Azul");
    }
    Vehiculo* GetColor() {
        Vehiculo* resultado = this->vehiculoColor;
        this->Reset();
        return resultado;
    }
};

class IBuilder
{
public:
    virtual ~IBuilder() {}
    virtual void ProducirMotor() const = 0;
    virtual void ProducirNeumaticos() const = 0;
    virtual void ProducirLlantas() const = 0;
    virtual void ProducirCapo() const = 0;
    virtual void ProducirPuerta() const = 0;
    virtual void ProducirFaros() const = 0;
    virtual void ProducirFarosAntiniebla() const = 0;
    virtual void ProducirParachoques() const = 0;
    virtual void ProducirParabrisas() const = 0;
    virtual void ProducirRetrovisor() const = 0;
    virtual void ProducirTirador() const = 0;
    virtual void ProducirLimpiaParabrisas() const = 0;
    virtual void ProducirTimon() const = 0;
    virtual void ProducirAsientos() const = 0;
};

class BuilderEspecifico : public IBuilder {
private:
    Vehiculo* vehiculo;
public:
    BuilderEspecifico() {
        this->Reset();
    }
    ~BuilderEspecifico() {
        delete vehiculo;
    }
    void Reset() {
        this->vehiculo = new Vehiculo();
    }
    void ProducirMotor() const override{
        this->vehiculo->componentes.push_back("Motor");
    }
    void ProducirNeumaticos() const override {
        this->vehiculo->componentes.push_back("Neumaticos");
    }
    void ProducirLlantas() const override {
        this->vehiculo->componentes.push_back("Llantas");
    }
    void ProducirCapo() const override {
        this->vehiculo->componentes.push_back("Capo");
    }
    void ProducirPuerta() const override {
        this->vehiculo->componentes.push_back("Puerta");
    }
    void ProducirFaros() const override {
        this->vehiculo->componentes.push_back("Faros");
    }
    void ProducirFarosAntiniebla() const override {
        this->vehiculo->componentes.push_back("Faros Antinieblas");
    }
    void ProducirParachoques() const override {
        this->vehiculo->componentes.push_back("Parachoques");
    }
    void ProducirParabrisas() const override {
        this->vehiculo->componentes.push_back("Parabrisas");
    }
    void ProducirRetrovisor() const override {
        this->vehiculo->componentes.push_back("Retrovisor");
    }
    void ProducirTirador() const override {
        this->vehiculo->componentes.push_back("Tirador");
    }
    void ProducirLimpiaParabrisas() const override {
        this->vehiculo->componentes.push_back("Limpia Parabrisas");
    }
    void ProducirTimon() const override {
        this->vehiculo->componentes.push_back("Timon");
    }
    void ProducirAsientos() const override {
        this->vehiculo->componentes.push_back("Asientos");
    }
    Vehiculo* GetVehiculo() {
        Vehiculo* resultado = this->vehiculo;
        this->Reset();
        return resultado;
    }
};

class Director
{
private:
    IBuilder* builder;
    Color* col;
public:
    void set_builder(IBuilder* builder, Color* col) {
        this->builder = builder;
        this->col = col;
    }
    void BuildVehiculoBasico() {
        this->builder->ProducirMotor();
        this->builder->ProducirLlantas();
        this->builder->ProducirFaros();
        this->builder->ProducirPuerta();
    }
    void BuildVehiculoRegular() {
        this->builder->ProducirMotor();
        this->builder->ProducirNeumaticos();
        this->builder->ProducirPuerta();
        this->builder->ProducirParachoques();
        this->builder->ProducirTimon();
        this->builder->ProducirAsientos();
    }
    void BuildVehiculoCompleto() {
        this->builder->ProducirMotor();
        this->builder->ProducirNeumaticos();
        this->builder->ProducirLlantas();
        this->builder->ProducirCapo();
        this->builder->ProducirPuerta();
        this->builder->ProducirFaros();
        this->builder->ProducirFarosAntiniebla();
        this->builder->ProducirParachoques();
        this->builder->ProducirParabrisas();
        this->builder->ProducirRetrovisor();
        this->builder->ProducirTirador();
        this->builder->ProducirLimpiaParabrisas();
        this->builder->ProducirTimon();
        this->builder->ProducirAsientos();
    }
    void ColoresPremium() {
        this->col->ColorAzul();
        this->col->ColorBlanco();
        this->col->ColorGris();
        this->col->ColorNegro();
        this->col->ColorRojo();
    }
};

void ClienteCode(Director& director) {
    BuilderEspecifico* builder = new BuilderEspecifico();
    ColorEspecifico* col = new ColorEspecifico();
    director.set_builder(builder,col);
    Vehiculo* p = builder->GetVehiculo();
    Vehiculo* q = col->GetColor();
    ///////////////////////////////////////////////////////////
    std::cout << "\t\tVehiculo Completo\n";
    ////Autopartes
    director.BuildVehiculoCompleto();
    p = builder->GetVehiculo();
    p->ListaComponentes();
    ////Colores
    director.ColoresPremium();
    q = col->GetColor();
    q->ListaPintura();
    delete p;
    delete q;
    std::cout << "--------------------------------------------" << std::endl;
    ///////////////////////////////////////////////////////////
    std::cout << "\t\tVehiculo Regular\n";
    ////Autopartes
    director.BuildVehiculoRegular();
    p = builder->GetVehiculo();
    p->ListaComponentes();
    ////Colores
    col->ColorBlanco();
    col->ColorGris();
    col->ColorNegro();
    q = col->GetColor();
    q->ListaPintura();
    delete p;
    delete q;
    std::cout << "--------------------------------------------" << std::endl;
    ///////////////////////////////////////////////////////////
    std::cout << "\t\tVehiculo basico\n";
    ////Autopartes
    director.BuildVehiculoBasico();
    p = builder->GetVehiculo();
    p->ListaComponentes();
    ////Colores
    col->ColorBlanco();
    q = col->GetColor();
    q->ListaPintura();
    delete p;
    delete q;
    delete builder;
    delete col;
}

int main()
{
    Director* director = new Director();
    ClienteCode(*director);
    delete director;
    system("pause");
    return 0;
}
