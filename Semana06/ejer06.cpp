#include <stdio.h>
int main()
{
    printf("ingrese los 10 #: ");
    int x;
    scanf("%d", &x);
    int nMayor = x, nMin = x;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x);
        if (x > nMayor)
            nMayor = x;
        if (x < nMin)
            nMin = x;
    }
    printf("el num mayor es: %d y el num menor es: %d\n", nMayor, nMin);
    return 0;
}