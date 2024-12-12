#include "Alumno.h"
#include <iostream>
#include <numeric>
#include <stdexcept>

using namespace std;

Alumno::Alumno(string n,string c):nombre(n), curso(c){}

void Alumno::mostrarInformacion(){
    cout<<" Alumno"<<nombre<<"\n"<<" curso "<<curso<<"\n"<<" notas ";
    for(float x:notas)
        cout<<x<<" ";
    cout<<endl;
}
void Alumno::agregarNotas(vector<float> &n){
    if(notas.empty()){
        throw runtime_error("El alumno no tiene notas asignadas.");
    }
    this->notas = n;
}
