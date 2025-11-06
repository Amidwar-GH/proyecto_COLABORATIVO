#include <iostream>
#include <cmath> // para M_PI
using namespace std;

// -------- Clase base --------
class Figura {
protected:
    string color;

public:
    Figura(string _color) {
        color = _color;
    }

    void mostrarColor() {
        cout << "Color de la figura: " << color << endl;
    }
};

// -------- Clase hija Círculo --------
class Circulo : public Figura {
private:
    float radio;

public:
    Circulo(string _color, float _radio) : Figura(_color) {
        radio = _radio;
    }

    void calcularArea() {
        float area = M_PI * radio * radio;
        cout << "Área del círculo: " << area << endl;
    }

    void calcularPerimetro() {
        float perimetro = 2 * M_PI * radio;
        cout << "Perímetro del círculo: " << perimetro << endl;
    }
};

// -------- Clase hija Rectángulo --------
class Rectangulo : public Figura {
private:
    float base, altura;

public:
    Rectangulo(string _color, float _base, float _altura) : Figura(_color) {
        base = _base;
        altura = _altura;
    }

    void calcularArea() {
        float area = base * altura;
        cout << "Área del rectángulo: " << area << endl;
    }
};

// -------- Clase hija Triángulo --------
class Triangulo : public Figura {
private:
    float base, altura;
    string tipo;

public:
    Triangulo(string _color, float _base, float _altura, string _tipo)
        : Figura(_color) {
        base = _base;
        altura = _altura;
        tipo = _tipo;
    }

    void calcularArea() {
        float area = (base * altura) / 2;
        cout << "Área del triángulo (" << tipo << "): " << area << endl;
    }
};

// -------- Función principal --------
int main() {
    string color, tipo;
    float radio, base, altura;

    cout << "--- FIGURAS GEOMÉTRICAS ---" << endl;

    // ---- Círculo ----
    cout << "\n>> CÍRCULO <<" << endl;
    cout << "Ingrese el color: ";
    cin >> color;
    cout << "Ingrese el radio: ";
    cin >> radio;

    Circulo c(color, radio);
    c.mostrarColor();
    c.calcularArea();
    c.calcularPerimetro();

    // ---- Rectángulo ----
    cout << "\n>> RECTÁNGULO <<" << endl;
    cout << "Ingrese el color: ";
    cin >> color;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    Rectangulo r(color, base, altura);
    r.mostrarColor();
    r.calcularArea();

    // ---- Triángulo ----
    cout << "\n>> TRIÁNGULO <<" << endl;
    cout << "Ingrese el color: ";
    cin >> color;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    cout << "Ingrese el tipo de triángulo (equilátero, isósceles, escaleno): ";
    cin >> tipo;

    Triangulo t(color, base, altura, tipo);
    t.mostrarColor();
    t.calcularArea();

    cout << "\nPrograma finalizado correctamente." << endl;
    return 0;
}
