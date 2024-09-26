#include <iostream>
using namespace std;    
int main(){
    int num1,num2,num3, resp;
    num1=5;
    num2=++num1;
    num3=num1++;
    num1++;
    ++num2;
    --num3;
    resp=num1+num2+num3;
    cout<<num1<<"\t"<<num2<<"\t"<<resp;
    return 0; 
}