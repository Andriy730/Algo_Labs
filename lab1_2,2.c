#include <stdio.h>

int main()
{
   int m,n;
   
   printf("please enter m:");
   scanf("%d", &m);
   printf("please enter n:");
   scanf("%d", &n);
   
   if(m-- > n)
       printf("m-- > n is true\n");
   else 
       printf("m-- > n is false\n");
   
   return 0;
}
