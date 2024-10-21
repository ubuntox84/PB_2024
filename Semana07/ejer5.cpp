//paso por valor
#include <iostream>
#include <cmath>
using namespace std;

void fun_elevarV(int x,int y){
    int resp=1;
    for (int i = 0; i < y; i++)
    resp*=x;
    cout<<x<<" elevado a la "<<y<<" es igual "<<resp;  
}
int main()
{
    int m,n;
    cout<<"Ingresar n y m: ";
    cin>>m>>n;
    fun_elevarV(m,n);    
    return 0;
}