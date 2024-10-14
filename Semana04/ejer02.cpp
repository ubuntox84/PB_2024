#include <iostream>
using namespace std;

int main()
{
    bool band = true;
    int num;
    do
    {
        cout << "\nIngrese un nro o presionar 0 si desea SALIR: ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "Precionaste 1" ;
            break;
        case 2:
            cout << "Precionaste 2" ;
            break;
        case 3:
            cout << "Precionaste 3" ;
            break;
        case 0:
            band = false;
            break;
        default:
            cout << "Numero no encontrado!!";
            break;
        }
    } while (band);
    cout << "Hasta pronto!!";
}