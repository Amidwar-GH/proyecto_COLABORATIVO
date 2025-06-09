/*1. Un alumno desea saber cual sera° su calificacion final en la primera unidad en el curso de
fundamentos de programacion. La calificacion final se compone de los siguientes
porcentajes: 40% de Evidencia de conocimiento, 35% de Evidencia de desempeno, y 25%
de Evidencia de producto. Haga uso de funciones para el c√°lculo de la calificacion final.*/
#include <iostream>
using namespace std;
float calcularCalificacionFinal(float conocimiento, float desempeno, float producto) {
    float calificacionFinal;
    calificacionFinal = (conocimiento * 0.40) + (desempeno * 0.35) + (producto * 0.25);
    return calificacionFinal;
}
int main() {
    float conoc, desemp, prod, resultado;
    cout<<"\n\n     *****************************************************"<<endl;
    cout<<"     Ingrese la calificacion de Evidencia de conocimiento: "<<endl;
    cout<<"     *****************************************************"<<endl;
	cin >> conoc;
	cout<<endl;
	cout<<"\n\n     **************************************************"<<endl;
    cout<<"     Ingrese la calificacion de Evidencia de desempeno: "<<endl;
    cout<<"     **************************************************"<<endl;
	cin >> desemp;
	cout<<endl;
	cout<<"\n\n     *************************************************"<<endl;
    cout<<"     Ingrese la calificacion de Evidencia de producto: "<<endl;
    cout<<"     *************************************************"<<endl;
	cin >> prod;
	cout<<endl;
    if (conoc >= 0 and desemp >= 0 and prod >= 0) {
        resultado = calcularCalificacionFinal(conoc, desemp, prod);
        cout << "La calificacion final es: " << resultado << endl;
    } else {
        cout << "Los datos que ingreso son incorrectos." << endl;
    }
    return 0;
}
