#include <iostream>

using namespace std;
// Funcion para intercambiar los valores de dos variables

void intercambio(int *p, int *p2){
int a =*p;
*p = *p2;
*p2 = a;
}

int main(){
int x = 10;
int y = 20;
cout<<"Antes del intercambio: "<<endl;
cout<< "x = " << x << ", y = " << y <<endl;

intercambio(&x, &y);

cout<<"Despues del intercambio: "<<endl;
cout<< "x = " << x << ", y = " << y <<endl;
    return 0;

}