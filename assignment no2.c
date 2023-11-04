#include <stdio.h>
#include <conio.h>

int main()
{
 int a[5],i,max=0;
 printf("\n enter 5 nos");
 for(i=0;i<=4;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<=4;i++)
 {
     if(a[i]>max)
     {
         max=a[i];
     }
 }
     printf("\n max is%d",max);

    return 0;
}
