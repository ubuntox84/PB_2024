//crear su propia funcion para encontrar m elevado a la n.
//--> func. devuelve valor
//--> func. no devuelve valor

#include <iostream>
#include <cmath>
using namespace std;
//Hallar m elevado a la n
int fun_elevarI(int m,int n){
    int resp=1;
    for (int i = 0; i < n; i++)
    resp*=m;
    return resp;    
}
void fun_elevarV(int m,int n){
    int resp=1;
    for (int i = 0; i < n; i++)
    resp*=m;
    cout<<m<<" elevado a la "<<n<<" es igual "<<resp;  
}
int main()
{
    int m,n;
    cout<<"Ingresar n y m: ";
    cin>>m>>n;
    cout<<m<<" elevado a la "<<n<<" es igual "<<fun_elevarI(m,n)<<endl;
    fun_elevarV(m,n);    
    return 0;
}