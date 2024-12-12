#include<iostream>
#include<string>
using namespace std;
class Persona{
    private:
    string name;
    string spell;
    public:
    Persona(string, string);
    void inforPersona();
};
class Alumno:Persona{
    private:
    string code;
    public:
    Alumno(string, string, string);
    void infoAlumno();
};
Persona::Persona(string n, string s):name(n),spell(s){}
void Persona::inforPersona(){
    cout<<"Nombre: "<<this->name<<endl<< " Apellido es: "<<this->spell<<endl;
}
Alumno::Alumno(string n, string s, string c):Persona(n,s),code(c){}
void Alumno::infoAlumno(){
    inforPersona();
    cout<<" su codigo "<<this->code;
}
int main(){
    Alumno a1("Melor","Yanac","002024");
    a1.infoAlumno();
}