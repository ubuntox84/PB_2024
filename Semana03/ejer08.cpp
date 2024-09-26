//1. se ingresa un nota y se toma ....
#include <iostream>
using namespace std;    
int main(void){
    int a=10;
    int b=10;
    {
        int b=10;
        {
            int c;
        }
    }
    cout<<a<<b;
}