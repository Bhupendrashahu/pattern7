#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j,n;
    printf("enter the no of rwo \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=i;j<=n;j++)
        {
            printf("%d",i);
            //(i)are used for print the column like 1,2,3,4,5 are as printed in pattern

        }
        printf("\n");
}
}
