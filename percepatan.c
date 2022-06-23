#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/
    float Vt;
    float V0;
    float t;
    float a;
    /*progam*/
    printf("Diketahui\n");
    printf("(t)\t:");
    scanf("%f",&t);
    printf("(V0)\t:");
    scanf("%f",&V0);
    printf("(Vt)\t:");
    scanf("%f",&Vt);
    a=(Vt-V0)/t;
    printf("Percepatan(a):%.3f",a);



    return 0;
}
