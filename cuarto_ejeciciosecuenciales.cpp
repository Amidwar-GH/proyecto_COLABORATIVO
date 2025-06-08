#include <iostream>

using namespace std;

int main (){
	int capital, dineroganado, aumento;
	cout<<"ingrese la cantidad de capital"<<endl;
	cin>>capital;
	aumento= capital*2/100;
	dineroganado=capital+aumento;
	cout<<"En el primer mes gano: "<<dineroganado<<endl;
	return 0;
}
