#include <iostream>

using namespace std;

int main(){
	int pagoinicial, pagofinal, descuento;
	cout<<"ingrese la cantidad de dinero a pagar: "<<pagoinicial<<endl;
	cin>>pagoinicial;
	descuento=pagoinicial*15/100;
	pagofinal=pagoinicial-descuento;
	cout<<"El pago final que debe realizar el cliente es: "<<pagofinal<<endl;
	return 0;
}
