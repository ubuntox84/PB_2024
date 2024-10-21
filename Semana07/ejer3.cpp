#include <iostream>
#include <cmath>
using namespace std;
//Hallar m elevado a la n
void potencia(int m,int n){
    cout<<m<<" elevado a la "<<n<<" es igual "<<pow(m,n);
}
int main()
{
    int m,n;
    cout<<"Ingresar n y m: ";
    cin>>m>>n;
    potencia(m,n);    
    return 0;
}