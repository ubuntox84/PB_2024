#include <iostream>
#include <cmath>
using namespace std;
void saludo(){
    cout<<"Hola FIIS";
}
void saludo(int d){
    cout<<"Hola "<<d;
}
void saludo (string name,int x){
    cout<<"Hola "<<name<<x;
}
int main()
{
    saludo();
    saludo(5);
    saludo("Jose",5);
    return 0;
}