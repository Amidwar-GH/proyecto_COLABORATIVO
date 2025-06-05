#include <iostream>
using namespace std;

char vocal(int nu) {
    char res;

    if (nu == 1) {
        res = a;
    } else {
        if (nu == 2) {
            res = e;
        } else {
            if (nu == 3) {
                res = i;
            } else {
                if (nu == 4) {
                    res = o;
                } else {
                    if (nu == 5) {
                        res = u;
                    } else {
                        res = ?;
                    }
                }
            }
        }
    }

    return res;
}

int main() {
    int num;
    char resp;

    cout << "Ingrese un numero del 1 al 5: ";
    cin >> num;

    resp = vocal(num);

    if (resp == ?) {
        cout << "Numero invalido" << endl;
    } else {
        cout << "La vocal es: " << resp << endl;
    }

    return 0;
} 
