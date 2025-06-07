#include <iostream>
using namespace std;
bool esPrimo(int num, int i, bool resp){
	i=2;
	resp=true;
	if (num<=1){
		resp= false;
	}else{
		while (i<=(num-1)){
			if (num%i==0){
				resp= false;
			}
			i++;
		}
	}
	return resp;
}

int main(){
	int numero,i;
	bool respuesta;
	cout<<"Para determinar si un numero es primo o no, indique el siguiente dato: "<<endl;
	cout<<"Ingrese el numero a evaluar: ";
	cin>>numero;
	respuesta=esPrimo(numero, i, respuesta);
	if (respuesta==true) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " NO es un numero primo." << endl;
    }
	return 0;
}
