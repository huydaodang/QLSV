#include <stdio.h>
#include <stdlib.h>
#define n 5

typedef int matran[n][n];
int i,j;
int thang[n],thua[n],hoa[n];
int Khoitao(matran mt)
{
    printf("Nhap vao cac gia tri khoi tao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mt[i][j]);
            if((j+1)%5==0){printf("\n");};
        }
    }
}
int Dem(matran mt,int hang)
{
    thang[hang-1]=0;
    thua[hang-1]=0;
    hoa[hang-1]=0;
    for(i=0;i<n;i++)
    {
        if(mt[hang-1][i]==2){thang[hang-1]+=1;};
        if(mt[hang-1][i]==1){hoa[hang-1]+=1;};
        if(mt[hang-1][i]==0){thua[hang-1]+=1;};
    }
}




int main()
{
   matran a;
   int check1=0,check2=0,check3=0;
   Khoitao(a);
   Dem(a,1);
   Dem(a,2);
   Dem(a,3);
   Dem(a,4);
   Dem(a,5);
   for(i=0;i<n;i++)
   {
       if(thang[i]>thua[i]){check1++;};
       if(thua[i]==0){check2++;};
       if(thang[i]>(int)n/2){check3++;};
   };
   printf("So doi co tran thang nhieu hon tran thua la:%d\n",check1);
   printf("So doi khong thua tran nao la: %d\n",check2);
   printf("So doi co so tran thang nhieu hon mot nua tong so tran cua giai la:%d\n",check3);
}
