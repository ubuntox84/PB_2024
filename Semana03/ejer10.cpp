#include <iostream>
using namespace std;    
int main(void){
    short razon=4;
    char a='J';
    char b='o';
    char c='s';
    char d='e';
    int x=int(a),y=int (b),z=int (c),p=int(d);
    cout<<a<<b<<c<<d<<endl;
    x+=4;
    y+=4;
    z+=4;
    p+=4;
    a=char(x);
    b=char(y);
    c=char(z);
    d=char(p);
    cout<<a<<b<<c<<d;       
}