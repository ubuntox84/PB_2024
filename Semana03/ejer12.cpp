#include <iostream>
using namespace std;    
int main(void){
    int x;
    x=10;
    //puntero: int *p;---> float *r;---->char *q;
    int *p;
    p=&x;
    
    cout<<"Valor: "<<x<<endl;
    cout<<"Direccion: "<<&x<<endl;
    cout<<"Donde apunta p: "<<p<<endl;
    cout<<"Valor del destino P: "<<*p<<endl;
    *p=20;
    cout<<"Valor: "<<x<<endl;

}