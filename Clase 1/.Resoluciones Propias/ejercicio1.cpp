#include <iostream>

using namespace std;

int main() {

    int a;
    int b;

    cout <<"hola, introduccion dos variables"<< endl;

    cin >> a;
    cin >> b;
    int suma = a+b;
    int resta = a-b;
    int division = a/b;

    char caract = (char) (a+b);
    cout << "La suma es : " << suma << ", la diferencia es: "<< resta << endl;
    return 0;


}