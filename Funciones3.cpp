/*3 Crea una funci�n esPrimo que tome un n�mero como par�metro y devuelva true si es
primo y false en caso contrario. Use la funci�n para indicar si un n�mero es primo,
mostrando el mensaje �El n�mero es Primo� o �El n�mero no es Primo� seg�n el caso.
Ejemplo:
Entrada: 4 Salida: �El n�mero no es Primo�
Entrada: 5 Salida: �El n�mero es Primo�
*/
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
