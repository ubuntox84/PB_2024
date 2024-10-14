#include <iostream>
#include <ctime>
using namespace std;
void mostrar(int x[3][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << x[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
void sumar(int x[3][2], int y[3][2], int r[3][2])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            r[i][j]= x[i][j]+x[i][j];
}
int main()
{
    int m2[3][2] = {{3, 3}, {3, 7}, {5, 8}};
    int m1[3][2] = {{3, 3}, {3, 7}, {5, 8}};
    int mr[3][2];
    int d3[3][5][10];
    int d3[3][5][10][11][12];
    mostrar(m1);
    mostrar(m2);
    sumar(m1,m2,mr);
    mostrar(mr);
}