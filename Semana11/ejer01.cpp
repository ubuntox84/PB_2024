#include<iostream>
using namespace std;
class Persona{
    private:
    string nombre;
    int edad;
    public:
    persona():nombre(""),edad(0){}
    Persona(string m):nombre(m){}
    Persona(string m, int e):nombre(m),edad(e){}
    string info(){
        cad=nombre+" "+edad;
        return cad;
    }
};
int main(){
    //Persona p1();
    Persona p2("Antonio");
    Persona p3("Juan",15);
    cout<<p2.info();
}