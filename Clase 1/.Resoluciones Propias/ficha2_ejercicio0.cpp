#include <iostream>

using namespace std;

int main() {

    string nombre;
    string apellido;
    string dni;
    string telefono;

    cout << "Introduzca su nombre: " << endl;
    cin >> nombre;

    cout << "Introduzca su apellido: " << endl;
    cin >> apellido;

    cout << "Introduzca su numero de documento: " << endl;
    cin >> dni;

    cout << "Introduzca su numero de telefono: " << endl;
    cin >> telefono;

    cout << "Su nombre es " << nombre << " y su apellido es " << apellido << endl;
    cout<< "su D.N.I. es: " <<dni<< " y su numero de telefono es " <<telefono<< endl;

    return 0;
}
