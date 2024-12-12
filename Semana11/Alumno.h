#ifndef ALUMNO_H  // Si ALUMNO_H no está definido
#define ALUMNO_H  // Define ALUMNO_H


#include <string>
#include <vector>

using namespace std;

class Alumno{
    private:
    string nombre;
    string curso;
    vector<float> notas;
    public:
    Alumno(string &n,string &c);
    //metodos
    void agregarNotas(vector<float> &notas);
    //float calcularPromedio();
    void mostrarInformacion();
};
#endif // Cierre del bloque de protección