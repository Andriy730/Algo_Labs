#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int** mas;
    int a = 0, n, m;
    
    printf("Enter num of rows:");
    scanf("%i", &n);
    printf("Enter num of columns:");
    scanf("%i", &m);
    mas = (int**) malloc(n * sizeof(int*));
    if(mas == NULL)
    {
        return 1;
    }
    
    srand(time(0));
    
    for(int i = 0; i < n; i++)
    {
        mas[i] = (int*) malloc(m * sizeof(int));
        if(mas[i] == NULL)
        {
            return 1;
        }   
        for(int j = 0; j < m; j++)
        {
            mas[i][j] = rand()%20;
        }
    }
    
    printf("matrix:\n");
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%i  ", mas[i][j]);
        }
        printf("\n");
    }
    
    while(a < 1 || a > n+1)
    {
        printf("Enter #row that u want to add:");
        scanf("%i", &a);
    }
    a = a-1;
    
    mas = (int**) realloc(mas, (n+1) * sizeof(int*));
    mas[n] = (int*) malloc(m * sizeof(int));
    
    if(mas == NULL)
    return 1;
 
    for(int i = n; i > a; i--)
    {
        for(int j = 0; j < m; j++)
        {
            mas[i][j] = mas[i-1][j];     
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        mas[a][i] = rand()%20;
    }
    
    printf("new matrix:\n");
    for(int i = 0; i < n+1; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%i  ", mas[i][j]);
        } 
        printf("\n");  
    }   
       
    for(int i = 0; i < n+1; i++)
    free(mas[i]);
    
    free(mas);
    return 0;
}
