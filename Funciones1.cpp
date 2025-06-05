/*1. Un alumno desea saber cuál será su calificación final en la primera unidad en el curso de
fundamentos de programación. La calificación final se compone de los siguientes
porcentajes: 40% de Evidencia de conocimiento, 35% de Evidencia de desempeño, y 25%
de Evidencia de producto. Haga uso de funciones para el cálculo de la calificación final.*/
#include <iostream>
using namespace std;
float calcularCalificacionFinal(float conocimiento, float desempeno, float producto) {
    float calificacionFinal;
    calificacionFinal = (conocimiento * 0.40) + (desempeno * 0.35) + (producto * 0.25);
    return calificacionFinal;
}
int main() {
    float conoc, desemp, prod, resultado;
    cout << "Ingrese la calificacion de Evidencia de conocimiento: ";
    cin >> conoc;
    cout << "Ingrese la calificacion de Evidencia de desempeño: ";
    cin >> desemp;
    cout << "Ingrese la calificacion de Evidencia de producto: ";
    cin >> prod;
    if (conoc >= 0 and desemp >= 0 and prod >= 0) {
        resultado = calcularCalificacionFinal(conoc, desemp, prod);
        cout << "La calificacion final es: " << resultado << endl;
    } else {
        cout << "Los datos que ingreso son incorrectos." << endl;
    }
    return 0;
}
