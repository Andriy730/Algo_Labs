#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 50
int main()
{
    int n = 10;
    int array[ARR_SIZE];
    int array_new[ARR_SIZE];
    int a;
    int j = 0;
    
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        array[i] = rand()%10 +1;
        printf("%i  ", array[i]);
    }
    printf("\n");
    
    printf("Enter number [1, 10]:");
    scanf("%i", &a);
    
    for(int i = 0, k = 0; i < n; i++)
    {
        if(array[i] == a)
        {
            j++;
        }    
        if(array[i] != a)
        {
            array_new[k] = array[i];
            k++;
        }
    }
    
    int c = 3*(n-j)/2;
    
    for(int i = 0, k = 0; i < c; i++, k++)
    {
        if(k%2 == 1)
        {
            array[i] = 0;
            i++;
        }
        array[i] = array_new[k];
    }
    
    for(int i = 0; i < c; i++)
    {
        printf("%i  ", array[i]);
    }
    printf("\n");
}
