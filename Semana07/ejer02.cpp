#include <iostream>
#include <cmath>
using namespace std;
//Hallar m elevado a la n
int potencia(int m,int n){
    return pow(m,n);
}
int main()
{
    int m,n, resp;
    cout<<"Ingresar n y m: ";
    cin>>m>>n;
    resp=potencia(m,n);
    cout<<m<<"elevado a la "<<n<<" es igual "<<resp;
    return 0;
}