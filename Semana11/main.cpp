#include <iostream>
#include <vector>
#include "Alumno.h"
using namespace std;
int main()
{
    try
    {
        string nombre, curso;
        vector<float> notas(3);
        cout << "Ing. Alumno: ";
        getline(cin, nombre);
        cout << "Ing. curso: ";
        getline(cin, curso);

        Alumno alumno(nombre, curso);

        cout << "ing. notas: ";
        for (float &x : notas)
        {
            cin >> x;
        }
        cin.ignore(); // Limpiar el buffer de entrada
        alumno.agregarNotas(notas);

        alumno.mostrarInformacion();
    }
    catch (const exception &e)
    {
        std::cerr << "Error: " << e.what() << "\n";
    }
    return 0;
}