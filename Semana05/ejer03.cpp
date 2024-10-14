#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int sum=0;
    for (int i = 0; i < 3; i++){
    sum+=i;
    sum+=2;}
    cout<<sum;
}