#include <stdio.h>
#include <math.h>

int main(void)
{
   double a,b,c,d,e,f,g,h,j;
   
   printf("please enter a:");
   scanf("%lf", &a);
   printf("please enter b:");
   scanf("%lf", &b);
   
   c = pow(a+b,4);
   d = pow(a,4);
   e = pow(b,4);
   f = pow(a,3);
   g = pow(b,3);
   h = c-(d+4*f*b+6*a*a*b*b);
   j = 4*a*g+e;
   
   printf("your result: %lf\n", h/j);
   
   return 0;
}
