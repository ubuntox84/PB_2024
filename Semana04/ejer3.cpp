#include <iostream>
#include <ctime>
using namespace std;

int aleatorio(int max, int min){
    int num;
    srand(time(NULL));
    num = rand() % (max - min) + min;    
    return num;
}
int main()
{
    while(105){
        cout<<aleatorio(0,10);
    }

}