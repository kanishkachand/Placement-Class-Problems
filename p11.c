#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i+1;j++)
         printf(" ");

        for(k=i;k<2*5-i-1;k++)
            printf("*");
        printf("\n");
    }
return 0;
}



