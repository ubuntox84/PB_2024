#include <iostream>
using namespace std;    
int main(void){
    int *p;
    int a[5];
    a[4]=4;
    a[0]=15;
    a[1]=20;
    a[3]=2;
    a[2]=10;
    
    p=a;
    p+=3;
    cout<<*p;
}