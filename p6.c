#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=5;j>0;j--)
        {
            if(j>i+1)
                printf(" ");
            else printf("%d",j);
        }printf("\n");
    }
return 0;
}

