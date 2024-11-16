//paso por referencia
#include <iostream>
#include <cmath>
using namespace std;
//paso por valor
void A(int a){
    a=50;
}
//paso por referencia
void B(int &b){
    b=50;
}
int main(){
    int var=100;
    cout<<"Valor inicial de VAR: "<<var<<endl;
    A(var);
    cout<<"Valor de VAR luego de paso por valor: "<<var<<endl;
    B(var);
    cout<<"Valor de VAR luego de paso por Referencia: "<<var<<endl;
    return 0;
}