#include <iostream>
#include <ctime>
using namespace std;

void moficar(int *p){
    *p=15;
}
int main()
{
    int x=10;
    moficar(&x);
    cout<<x;
}