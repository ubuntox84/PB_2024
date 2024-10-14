#include <iostream>
#include <ctime>
using namespace std;
#define N 4
void mostrarvector(int v[]){
    for (int i = 0; i < N; i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}
void ordenar(int v[]){
    int temp;
for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(v[i]>v[j]){
                temp=v[j];
                v[j]=v[i];
                v[i]=temp;
            }
        }
    }
}
int main()
{
    int v[]={3,5,2,6};
    int temp;
    mostrarvector(v);
    ordenar(v);
    mostrarvector(v);    
}