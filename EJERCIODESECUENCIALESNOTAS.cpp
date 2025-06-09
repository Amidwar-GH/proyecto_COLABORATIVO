#include<iostream>
using namespace std;

int main(){
	float EC,ED,EP,CF; //EV EVIDENCIA DE CONOCIMIENTO ED EVIDENCIA DE DESEMPEÑO EP EVIDENCIA DE PRODUCTO
	char nombre[50];
	
	cout<<"BIENVENIDO AL PROGRAMA."<<endl;
	cout<<"_______________________"<<endl;
	cout<<"Digite el nombre del estudiante : "; cin>>nombre;
	cout<<"                                  "<<endl;
	
	
	cout<<"Digite la calificacion de conocimiento: "; cin>>EC;
	while(EC > 20){
		cout<<"Nota invalida, digite nuevamente la nota de conocimiento: ";
		cin>>EC;
	}
	
	cout<<"Digite la calificacion de desempenio: "; cin>>ED;
	while(ED > 20){
		cout<<"Nota invalida, digite nuevamente la nota de desempenio: ";
		cin>>ED;
	}
	
	cout<<"Digite la calificacion de producto: "; cin>>EP;
	while(EP > 20){
		cout<<"Nota invalida, digite nuevamente la nota de producto: ";
		cin>>EP;
	}
	
	
	CF= (EC*0.4)+(ED*0.35)+(EP*0.25);
	cout<<"La calificacion del estudiante "<<nombre<<" es: "<<CF<<endl;
	cout<<"_____________________________"<<endl;
	cout<<"PROGRAMA FINALIZADO, GRACIAS.";
	
	return 0;
}


