#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a[50][50];
    int m,n,i,j;
    printf("Nhap vao so m,n");
    scanf("%d%d",&m,&n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n a[%d][%d]=",i,j);
            scanf("%f",(float*)a+i*50+j);
        }
    };
    fflush(stdio);

}
