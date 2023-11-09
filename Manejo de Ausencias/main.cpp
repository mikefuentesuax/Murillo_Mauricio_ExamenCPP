#include <iostream>
#include <string>

using namespace std;

//Estado de la asistencia
enum class Asistencia{
    Presente,
    Ausente,
    Justificado,
};

//Registro de asistencia
class Registro{
    private:
        string fecha;
        Asistencia estado ;
    public:

    Registro(string fecha, Asistencia estado): fecha(fecha), estado(estado){}

    void mostrar_asistencia()const{
        cout << "Fecha: " << fecha << " Estado: ";
        switch (estado) {
            case Asistencia::Presente:
                cout << "Presente";
                break;
            case Asistencia::Ausente:
                cout << "Ausente";
                break;
            case Asistencia::Justificado:
                cout << "Justificado";
                break;
        }
        cout<<endl;
        }

    };
    int main(){
        Registro r1("12/12/2020", Asistencia::Presente);
        Registro r2("13/12/2020", Asistencia::Ausente);
        Registro r3("14/12/2020", Asistencia::Justificado);
        r1.mostrar_asistencia();
        r2.mostrar_asistencia();
        r3.mostrar_asistencia();
        return 0;
    }