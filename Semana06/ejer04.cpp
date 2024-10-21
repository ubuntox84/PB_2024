#include <iostream>
using namespace std;
int main(){
    char name[30];
    char spell[30];
    printf("ingresa tu nombre: ");
    scanf("%s", name);
    printf("ingresa tu apellido: ");
    scanf("%s", spell);
    printf("Mi nombre es: %s y mi apellido es %s\n",name, spell);
}