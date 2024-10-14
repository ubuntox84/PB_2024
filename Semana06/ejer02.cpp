#include <iostream>
#include <string>
using namespace std;
int main()
{
    char name[50];
    string Name;
    cout<<"escribe tu nombre:"<<endl;
    //cin>>name;
    getline(cin,Name);
    cout<<Name;
}