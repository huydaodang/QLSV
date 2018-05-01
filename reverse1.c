#include <stdio.h>
#include <stdlib.h>

int Dem(int n)
{
    int i=0;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    return i;
}
void Savemang(int a[],int n,int *dem)
{
    int i=0;
    do{
        a[i]=n%10;
        i++;
        n=n/10;// 100
    }while(n!=0);
    *dem=i;
}
void Inmang(int a[],int size)
{
    int i;
    for(i=(size-1);i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
void reverseInt(int a,int size )
{
    int *p;
    p=a;
    int i,tmp;
    for(i=0;i<size/2;i++)
    {
        tmp=p[i];
        p[i]=p[size-1-i];
        p[size-1-i]=tmp;
    }
}
int main()
{
    int n,n1;
    printf("Nhap vao so can dao nguoc:");
    scanf("%d",&n);
    n1=Dem(n);
    int a[n1],p;
    Savemang(a,n,&p);
    Inmang(a,p);
    reverseInt(a,p);
    Inmang(a,p);
}
