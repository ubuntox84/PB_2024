#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double PI=3.14159265;
    cout<<scientific;
    cout<<"Notacion cientifica: "<<PI<<endl;

    cout<<setprecision(4);
    cout<<"Notacion cientifica: "<<PI<<endl;
    
    cout<<fixed;
    cout<<"Notacion cientifica: "<<PI<<endl;
}