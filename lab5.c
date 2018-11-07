#include <stdio.h>
#define m 100

void transp(int array[][m], int n)
{
    int t;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        { 
            t = array[i][j];
            array [i][j] = array[j][i];
            array[j][i] = t;
        }
    }
}

void symetric(int array[][m], int array_1[][m], int n)
{   
    int p;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(array[i][j] != array_1[i][j])
            {
                p = 0;
                break;
            }
            else
            p = 1;  
        }
    }
    if(p == 1)
    printf("matrix is symetric\n");
    else if(p == 0)
    printf("matrix is not symetric\n");
}

int main(void)
{
    int n;
    printf("enter order of matrix");
    scanf("%i", &n);
    int matrix[n][m];
    int matrix_1[n][m];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("enter elements [%i][%i] of matrix", i, j);
            scanf("%i", &matrix[i][j]);
            matrix_1[i][j] = matrix[i][j];
        }
    }
    
    transp(matrix_1, n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%i", matrix_1[i][j]);
        }
    }    
    printf("\n");
    symetric(matrix, matrix_1, n);
}
