/*. 2 Si las vocales se representan con números del 1 al 5 (1 para 'a', 2 para 'e', 3 para 'i', 4 para
'o', 5 para 'u'), lea un número e indique qué vocal es. Haga uso de funciones para que,
dado un número, retorne la vocal correspondiente*/
#include <iostream>
using namespace std;
char vocal(int nu, char res){
	switch (nu){
			case 1:
		res='a';
		break;
			case 2:
		res='e';
		break;
			case 3:
		res='i';
		break;
			case 4:
		res='o';
		break;
			case 5:
		res='u';
		break;
			default:
		cout<<"Valor Ingresado Incorrecto"<<endl;
		break;	
		}
	return res;
}
int main(){
	int num; 
	char resp;
	cout<<"Sabiendo que las vocales se representan del 1 al 5: ";
	cout<<"Ingrese un numero: ";
	cin>>num;
	resp=vocal(num, resp);
	cout<<"La vocal es: "<<resp<<endl;
	return 0;
}
