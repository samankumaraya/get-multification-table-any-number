#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n,i;
    printf("Enter your necessary multification pattern :");scanf("%d",&n);

    for(i=1;i<=12;i++)
    {
       printf("%d * %d = %d",i,n,i*n);
       printf("\n");
    }

    return 0;
}
