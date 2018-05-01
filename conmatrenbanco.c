#include <stdio.h>
#include <stdlib.h>
#define nmax 10

int chuadi[nmax*nmax];
char luu[nmax*nmax];
char n,m,h,c;

void inketqua(void)
{
    char i;
    printf("Cach di la:\n");
    for(i=1;i<=m;i++)
    {
        printf("(%d,%d)\n",(luu[i-1]-1)/n+1,(luu[i-1]-1)%n+1);
    };
    getch();
    exit(0);
}
int hke(int x)
{
    int i,j,cs;
    char kei[nmax];
    i=(x-1)/n+1;
    j=(x-1)%n+1;
    cs=0;
    if(i>2)
    {

    }
}


