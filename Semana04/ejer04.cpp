#include <iostream>
#include <ctime>
using namespace std;

int aleatorio(int max, int min)
{
    int num;
    srand(time(NULL));
    num = rand() % (max - min) + min;
    return num;
}
int main()
{
    int op;
    char op2;
    double a, b;
    bool band = true;
    a = static_cast<double>(0, 10);
    b = (double)aleatorio(0, 10);
    do
    {
        cout << "Que deseo realizar: [1] Suma [2] Resta [3] Dividir [0] salir: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "La suma de " << a << " + " << b << " = " << (a + b);
            break;
        case 2:
            cout << "La resta de " << a << " - " << b << " = " << (a - b);
            break;
        case 3:
            if (b != 0)
            {
                cout << "La division de " << a << " / " << b << " = " << (a / b);
            }
            else
            {
                cout << "no puede dividir los " << a << " / " << b;
            }
            break;
        case 0:
            band = false;            
            break;
        default:
            cout << "Operación desconocida!!";
            break;
        }
        if(band==false){
            break;
        }
        cout << "Deseas modificar el numero: S/N";
        cin >> op2;
        if (op2 == 's' || op2 == 'S')
        {
            a = static_cast<double>(0, 10);
            b = (double)aleatorio(0, 10);
        }
    } while (band);
    cout << "Hasta pronto!!";
}