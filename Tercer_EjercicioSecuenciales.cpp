#include <iostream>

using namespace std;
int main(){
	int perimetro, apotema, area;
	cout<<"ingrese el valor del perimetro del pentagono"<<endl;
	cin>>perimetro;
	cout<<"ingrese el valor de la apotema del pentagono"<<endl;
	cin>>apotema;
	area=perimetro*apotema/2;
	cout<<"el area del pentagono es: "<<area<<endl;
	return 0;
}
