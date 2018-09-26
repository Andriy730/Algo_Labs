#include <stdio.h>
#include <math.h>
#define Pi 3.14

int main(void)
{
    float x;
    long double y,a,b,c,d,e,s,sum;
    int n;
    
    y = 0;
    
    for(x = 0.1; x <= 0.8; x += 0.07)
    {
        a = sin(Pi/4.0);
        b = x*a;
        c = cos(Pi/4.0);
        d = pow(x, 2.0);
        e = (1.0-2.0*x*c+d);
        y = b/e;
        sum = 0;
        s = 0;
            for(n = 1; c > 0.0001; n++)
            {
                a = sin(n*Pi/4.0);
                b = pow(x,n);
                c = a*b;
                sum += c;
            }    
            for(n = 1; n <= 40; n++)
            {
            a = sin(n*Pi/4.0);
            b = pow(x,n);
            s += a*b;    
            }
        printf("%f\n", x);       
        printf("%Lf\n", y);
        printf("%Lf\n", s);
        printf("%Lf\n", sum);
     
    }
    
   
    return 0;
}
