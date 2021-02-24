#include<stdio.h>
int main()
{
    int i,j,k,n;
    for(i=0;i<6;i++)
    {
        for(j=5;j>i;j--)
         printf(" ");

        for(k=0;k<2*i-1;k++)
            if(k<i)
            {
            printf("%d",k+1);
            n=k;
            }
            else
            {
                printf("%d",n);
                   n--;
            }
        printf("\n");
    }
return 0;
}



