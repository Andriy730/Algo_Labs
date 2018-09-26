#include <stdio.h>

int main()
{
   int m,n;
   
   printf("please enter m:");
   scanf("%d", &m);
   printf("please enter n:");
   scanf("%d", &n);
   
   if(n-- > m)
       printf("n-- > m is true\n");
   else 
       printf("n-- > m is false\n");
   
   return 0;
}
