#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,n = 1;
    double c, b, sum = 0;
    
    do
    {
    a = 2*n - 1;
    b = pow(2,n);
    c = a/b;
    sum += c;
    n++;
    }
    while(c >= 0.0001);
    
     printf("%0.0001lf\n", sum);
     
     return 0;
}
