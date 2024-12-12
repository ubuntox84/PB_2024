#include<iostream>
#include<string>
using namespace std;
class Persona{
    private:
    string name;
    public:
    Persona(string);
    void informacion();
};
Persona::Persona(string n):name(n){}
void Persona::informacion(){
    cout<<"Tu nombre es: "<<this->name;
}
int main(){
    Persona p1("Luis");
    p1.informacion();
}