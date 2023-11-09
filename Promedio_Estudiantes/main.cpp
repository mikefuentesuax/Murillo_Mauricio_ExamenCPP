#include <iostream>
#include <vector>
using namespace std;


//Funcion para la media de calificaciones
double notas(const std::vector<int> & calificaiones){
    if (calificaiones.empty()){
        cout << "No hay calificaciones" << endl;
    }
    int suma = 0;
    for (int calificacion : calificaiones){
        suma += calificacion;
    }
    return static_cast<double>(suma) / calificaiones.size();
}
//Ejemplo de uso
int main(){
    vector<int> calificaciones = {10, 8, 9, 10, 10};

    //Muestra el resultado
    cout << "La media de las calificaciones es: " << notas(calificaciones) << endl;
    return 0;
}