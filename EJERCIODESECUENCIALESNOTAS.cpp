#include<iostream>
using namespace std;

int main(){
	float EC,ED,EP,CF; //EV EVIDENCIA DE CONOCIMIENTO ED EVIDENCIA DE DESEMPEÑO EP EVIDENCIA DE PRODUCTO
	char nombre[50];
	
	cout<<"Digite su nombre: "; cin>>nombre;
	cout<<"Digite la calificacion de conocimiento: "; cin>>EC;
	cout<<"Digite la calificacion de desempenio: "; cin>>ED;
	cout<<"Digite la calificacion de producto: "; cin>>EP;
	CF= (EC*0.4)+(ED*0.35)+(EP*0.25);
	cout<<nombre<<"Su calificacion final es: "<<CF<<endl;
	
	
	return 0;
}
