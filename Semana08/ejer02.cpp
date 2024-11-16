#include <iostream>
#include <cmath>
using namespace std;
void saludo(int x=0,string name=""){
    cout<<"Hola FIIS"<<name<<x;
}
int main()
{
    saludo(15, "jose");
    return 0;
}