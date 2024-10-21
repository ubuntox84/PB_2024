#include <iostream>
#include <iomanip>
using namespace std;
void saludar(int);
float _007peru();
int main()
{   int n; 
    cout<<"Ing. el nro de saludos:";
    cin>>n;
    saludar(n);
    _007peru();
    return 0;
}
void saludar(int n){
    for (int i = 0; i < n; i++)
    cout<<"Buenos dias\n";
}
float _007peru(){
    float resp=0.0;
    return resp;
}