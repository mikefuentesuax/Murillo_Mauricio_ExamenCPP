#include <iostream>
#include <string>

using namespace std;
class Estudiante{
private:
    string nombre;
    int edad;
    string grado;

    public:
    // Constructor
    Estudiante(string nombre, int edad, string grado): nombre(nombre), edad(edad), grado(std::move(std::move(grado))) {}
        void mostrar_info() {
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
            cout << "Grado: " << grado << endl;
        }
    };
    int main(){
        // Crear un objeto de la clase Estudiante
        Estudiante estudiante1("Juan", 20, "Ingenieria en Sistemas");
        // Mostrar la informacion del objeto
        estudiante1.mostrar_info();
        return 0;
}