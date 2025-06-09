//Ejercicio 3: Determinar el área de un pentágono regular.
#include <iostream>
using namespace std;
int main(){
	float lado, apotema, area; //se puso float para incluir decimales.
	cout<<"Para hallar el area de un pentagono regular se necesitan los siguientes datos: "<<endl;
	cout<<"medida del lado del pentagono regular: "<<endl;
	cin>>lado;
	if (lado >= 0){
		cout<<"apotema del pentagono regular: "<<endl;
		cin>>apotema;
		if (apotema >= 0){
			area = (lado * apotema)*5/2;
			cout<<"El area del pentagono regular es: "<<area<<endl;
		}
	}
	return 0;
}
