#include <stdio.h>
#include <math.h>

int main()
{
   int a,m,n;
   
   printf("please enter m:");
   scanf("%d", &m);
   printf("please enter n:");
   scanf("%d", &n);
   
   a = n++ - m;
   
   printf("%d\n", a);
   
   return 0;
}
