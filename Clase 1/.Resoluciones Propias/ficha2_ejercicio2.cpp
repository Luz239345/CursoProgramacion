#include <iostream> 

using namespace std;

int main() {
    char h;

    cout <<"Introducir el caracter a calificar: " << endl;
    cin >> h;

    if (h>='a' && h<='z'){
        cout << "El caracter es una letra minuscula." << endl;
    } else if (h>='0' && h<='9'){
        cout << "El caracter es un numero."<< endl;
    } else if (h>='A' && h<='Z'){
        cout << "El caracter es una letra mayuscula" << endl;
    } else {
        cout <<"El caracter es otra cosa" << endl;
    }
    
    return 0;
}