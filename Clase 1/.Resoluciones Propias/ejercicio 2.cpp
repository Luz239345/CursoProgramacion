#include <iostream>

using namespace std;

int main () {

    int a;

cout <<"hola, introduci el valor de A que queres sumar"<< endl;

cin >> a;

int suma = 0;

for (int i =0; i <= a+1; i++)
{
    cout<<i<<endl;
    suma += i;
}

for (int k = a; k>0; k--)

cout <<"La suma es:" << suma << endl;

return 0;
