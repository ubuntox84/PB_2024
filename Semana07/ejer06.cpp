//paso por referencia
#include <iostream>
#include <cmath>
using namespace std;

void fun_elevarV(int x,int y, int &z){
    int resp=1;
    for (int i = 0; i < y; i++)
    resp*=x;
    z=resp; 
}
int main()
{
    int m,n,resp;
    cout<<"Ingresar n y m: ";
    cin>>m>>n;
    fun_elevarV(m,n,resp);  
    cout<<m<<" elevado a la "<<n<<" es igual "<<resp;   
    return 0;
}