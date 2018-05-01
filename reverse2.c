#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,doicho=0;
    printf("Nhap so can doi cho:");
    scanf("%d",&a);
    while(a!=0)
    {
        doicho=doicho*10+(a%10);
        a=a/10;
    }
    printf("%.9d\n",doicho);
}
