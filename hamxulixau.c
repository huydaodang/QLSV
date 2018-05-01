#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

char *copy(char *st,int x, int y)
{
    char *dest;
    dest=(char *)calloc(y-x+2);
    memcpy(dest,st+x,y-x+1);
    *(dest+y-x+1)='\0';
    return(dest);
}
char *insert(char ch,char *st,int index)
{
    char scratch[255],* temp;

    temp=copy(st,0,index-1);
    strcpy(scratch,temp);
    free(temp);
    scratch[index]=ch;
    scratch[index+1]='\0';
    temp=copy(st,index,strlen(st)+1);
}


int main()
{
   char *copy()


}
