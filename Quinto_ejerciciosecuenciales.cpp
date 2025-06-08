#include <iostream>

using namespace std;

int main(){
	int sueldo, comision, comisiontotal, sueldofinal;
	cout<<"Ingrese el sueldo"<<endl;
	cin>>sueldo;
	comision=sueldo*10/100;
	comisiontotal= comision*3;
	sueldofinal= sueldo+comisiontotal;
	cout<<"Dinero obtenido por comisiones: "<<comisiontotal<<endl;
	cout<<"dinero total obtenido: "<<sueldofinal<<endl;
	return 0;
}
